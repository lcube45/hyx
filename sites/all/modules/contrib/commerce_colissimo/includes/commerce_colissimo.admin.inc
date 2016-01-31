<?php

/**
 * @file
 * Contains the administrative page and form callbacks for the Colissimo module.
 */

/**
 * Builds the form for adding and editing Colissimo services.
 */
function commerce_colissimo_service_form($form, &$form_state, $shipping_service) {
  // Store the initial shipping service in the form state.
  $form_state['shipping_service'] = $shipping_service;
  $form['colissimo'] = array(
    '#tree' => TRUE,
  );

  $form['colissimo']['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $shipping_service['title'],
    '#description' => t('The administrative title of this Colissimo. It is recommended that this title begin with a capital letter and contain only letters, numbers, and spaces.'),
    '#required' => TRUE,
    '#size' => 32,
    '#maxlength' => 255,
    '#field_suffix' => ' <small id="edit-colissimo-title-suffix">' . t('Machine name: @name', array('@name' => $shipping_service['name'])) . '</small>',
  );

  if (empty($shipping_service['name'])) {
    $form['colissimo']['name'] = array(
      '#type' => 'machine_name',
      '#title' => t('Machine name'),
      '#default_value' => $shipping_service['name'],
      '#maxlength' => 32,
      '#required' => TRUE,
      '#machine_name' => array(
        'exists' => 'commerce_shipping_service_load',
        'source' => array('colissimo', 'title'),
      ),
      '#description' => t('The machine-name of this Colissimo. This name must contain only lowercase letters, numbers, and underscores. It must be unique.'),
    );
  }
  else {
    $form['colissimo']['name'] = array(
      '#type' => 'value',
      '#value' => $shipping_service['name'],
    );
  }

  $form['colissimo']['display_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Display title'),
    '#default_value' => $shipping_service['display_title'],
    '#description' => t('The front end display title of this Colissimo shown to customers. Leave blank to default to the <em>Title</em> from above.'),
    '#size' => 32,
  );

  $form['colissimo']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#description' => t('Describe this Colissimo if necessary. The text will be displayed in the Colissimo services overview table.'),
    '#default_value' => $shipping_service['description'],
    '#rows' => 3,
  );

  // Build a currency options list from all enabled currencies.
  $currency_options = commerce_currency_get_code(TRUE);

  // If the current currency value is not available, add it now with a
  // message in the help text explaining it.
  if (isset($shipping_service['data']['currency_code']) && !array_key_exists($shipping_service['data']['currency_code'], $currency_options)) {
    $currency_options[$shipping_service['data']['currency_code']] = check_plain($shipping_service['data']['currency_code']);
    $description = t('The currency set for this rate (@currency_code) is not currently enabled. If you change it now, you will not be able to set it back.', array('@currency_code' => $currency_options[$shipping_service['data']['currency_code']]));
  }
  else {
    $description = t('Selected currency code');
  }

  $form['colissimo']['currency_code'] = array(
    '#type' => 'select',
    '#title' => t('Use this currency code'),
    '#description' => $description,
    '#options' => $currency_options,
    '#default_value' => isset($shipping_service['data']['currency_code']) ? $shipping_service['data']['currency_code'] : commerce_default_currency(),
    '#suffix' => '</div>',
  );

  // Add support for base rates including tax.
  if (module_exists('commerce_tax')) {
    // Build an array of tax types that are display inclusive.
    $inclusive_types = array();

    foreach (commerce_tax_types() as $name => $tax_type) {
      if ($tax_type['display_inclusive']) {
        $inclusive_types[$name] = $tax_type['title'];
      }
    }

    // Build an options array of tax rates of these types.
    $tax_options = array();

    foreach (commerce_tax_rates() as $name => $tax_rate) {
      if (in_array($tax_rate['type'], array_keys($inclusive_types))) {
        $tax_options[$inclusive_types[$tax_rate['type']]][$name] = t('Including @title', array('@title' => $tax_rate['title']));
      }
    }

    $form['colissimo']['include_tax'] = array(
      '#type' => 'select',
      '#title' => t('Include tax in this rate'),
      '#description' => t('Saving a rate tax inclusive will bypass later calculations for the specified tax.'),
      '#options' => count($tax_options) == 1 ? reset($tax_options) : $tax_options,
      '#default_value' => !empty($shipping_service['data']['include_tax']) ? $shipping_service['data']['include_tax'] : '',
      '#required' => FALSE,
      '#empty_value' => '',
    );
  }

  //Check if the service_key_name has been changed by ajax
  if (isset($form_state['values']['colissimo']['service_key_name'])) {
    $selected_shipping_service = $form_state['values']['colissimo']['service_key_name'];
  }
  else {
    $selected_shipping_service = isset($shipping_service['service_key_name']) ? $shipping_service['service_key_name'] : '';
  }

  $form['colissimo']['service_key_name'] = array(
    '#type' => 'select',
    '#title' => t('Rates table'),
    '#description' => 'Colissimo rate table to use',
    '#options' => commerce_colissimo_services_rates_tables_options(),
    '#default_value' => $selected_shipping_service,
    '#ajax' => array(
      'callback' => 'ajax_recommendation_level_select_callback',
      'wrapper' => 'recommendation-level-div',
      'method' => 'replace',
      'effect' => 'slide',
    ),
  );

  //Create a generic "recommendation" element to declare a div
  $form['colissimo']['recommendation'] = array(
    '#prefix' => '<div id="recommendation-level-div">',
    '#suffix' => '</div>',
  );

  //Based on the selected shipping service rate table, we build the recommendation
  //levels table. It allows the user to force the recommendation level.
  if (!empty($selected_shipping_service)) {
    //Check if the current selected shipping service has a "recommendation" table
    $recomendation_level_options = commerce_colissimo_get_recommendation_limits_options($selected_shipping_service);
    if (count($recomendation_level_options) > 0) {
      $form['colissimo']['recommendation'] = array(
        '#type' => 'select',
        '#title' => '"Recommendation" level to use',
        '#description' => 'Select the "recommendation" level to use if the table includes on. You can leave it to "Automatic" to let the system define what level it should use, or force it',
        '#options' => $recomendation_level_options,
        '#default_value' => isset($shipping_service['data']['recommendation']) ? $shipping_service['data']['recommendation'] : '',
        '#prefix' => '<div id="recommendation-level-div">',
        '#suffix' => '</div>',
      );
    }
  }

  $form['colissimo']['smart_calculation'] = array(
    '#type' => 'radios',
    '#title' => 'Smart cost calculation for overweight orders',
    '#description' => 'Automatically calculate the sum of shipping cost if the order\'s total weight is more than the MAX_WEIGHT_LIMIT (' . MAX_WEIGHT_LIMIT . ')
    <br/> The system will calculate the minimum shipping cost for the whole order, based on a proportional distribution of the order\'s total value for the "Recommendation" level selection (if there is one)',
    '#options' => commerce_colissimo_get_smart_calculation_modes_option(),
    '#default_value' => isset($shipping_service['data']['smart_calculation']) ? $shipping_service['data']['smart_calculation'] : 'NONE',
  );

  $form['actions'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('form-actions')),
    '#weight' => 40,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Colissimo'),
  );

  if (!empty($form_state['shipping_service']['name'])) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete Colissimo'),
      '#suffix' => l(t('Cancel'), 'admin/commerce/config/shipping/services/colissimo'),
      '#submit' => array('commerce_colissimo_service_form_delete_submit'),
      '#weight' => 45,
    );
  }
  else {
    $form['actions']['submit']['#suffix'] = l(t('Cancel'), 'admin/commerce/config/shipping/services/colissimo');
  }

  return $form;
}

/*
 * Form callback function for commerce_colissimo_service_form
 */
function ajax_recommendation_level_select_callback($form, $form_state) {
  return $form['colissimo']['recommendation'];
}

/**
 * Validate handler: ensures a valid currency was selected for the service.
 */
function commerce_colissimo_service_form_validate($form, &$form_state) {
  $currency_options = commerce_currency_get_code(TRUE);
  if (!array_key_exists($form_state['values']['colissimo']['currency_code'], $currency_options)) {
    form_set_error('colissimo][currency_code', t('This currency code is not enabled on your site - please select an enabled currency code.'));
  }
}

/**
 * Submit handler: saves the new or updated Colissimo service.
 */
function commerce_colissimo_service_form_submit($form, &$form_state) {
  $shipping_service = $form_state['shipping_service'];

  // Update the shipping service array with values from the form.
  foreach (array('name', 'title', 'display_title', 'description', 'service_key_name') as $key) {
    $shipping_service[$key] = $form_state['values']['colissimo'][$key];
  }

  unset($shipping_service['data']);
  $shipping_service['data']['recommendation'] = !empty($form_state['values']['colissimo']['recommendation']) ? $form_state['values']['colissimo']['recommendation'] : '';
  $shipping_service['data']['smart_calculation'] = $form_state['values']['colissimo']['smart_calculation'];
  $shipping_service['data']['include_tax'] = $form_state['values']['colissimo']['include_tax'];
  $shipping_service['data']['currency_code'] = $form_state['values']['colissimo']['currency_code'];

  // Save the shipping service.
  $op = commerce_colissimo_service_save($shipping_service);

  if (!$op) {
    drupal_set_message(t('The Colissimo service failed to save properly. Please review the form and try again.'), 'error');
    $form_state['rebuild'] = TRUE;
  }
  else {
    drupal_set_message(t('Colissimo service saved.'));
    $form_state['redirect'] = 'admin/commerce/config/shipping/services/colissimo';
  }
}

/**
 * Submit handler: redirects to the Colissimo service delete confirmation form.
 *
 * @see commerce_colissimo_service_form()
 */
function commerce_colissimo_service_form_delete_submit($form, &$form_state) {
  $form_state['redirect'] = 'admin/commerce/config/shipping/services/colissimo-' . strtr($form_state['shipping_service']['name'], '_', '-') . '/delete';
}

/**
 * Displays the edit form for an existing Colissimo service.
 *
 * @param $name
 *   The machine-name of the Colissimo service to edit.
 */
function commerce_colissimo_service_edit_page($name) {
  return drupal_get_form('commerce_colissimo_service_form', commerce_shipping_service_load($name));
}

/**
 * Builds the form for deleting Colissimo services.
 */
function commerce_colissimo_service_delete_form($form, &$form_state, $shipping_service) {
  $form_state['shipping_service'] = $shipping_service;

  $form = confirm_form($form,
    t('Are you sure you want to delete the <em>%title</em> Colissimo service?', array('%title' => $shipping_service['title'])),
    'admin/commerce/config/shipping/services/colissimo',
    '<p>' . t('This action cannot be undone.') . '</p>',
    t('Delete'),
    t('Cancel'),
    'confirm'
  );

  return $form;
}

/**
 * Submit callback for commerce_colissimo_service_delete_form().
 */
function commerce_colissimo_service_delete_form_submit($form, &$form_state) {
  $shipping_service = $form_state['shipping_service'];

  commerce_colissimo_service_delete($shipping_service['name']);

  drupal_set_message(t('The Colissimo service <em>%title</em> has been deleted.', array('%title' => $shipping_service['title'])));
  watchdog('commerce_colissimo', 'Deleted Colissimo service <em>%title</em>.', array('%title' => $shipping_service['title']), WATCHDOG_NOTICE);

  $form_state['redirect'] = 'admin/commerce/config/shipping/services/colissimo';
}

/**
 * Displays the delete confirmation form for an existing Colissimo service.
 *
 * @param $name
 *   The machine-name of the Colissimo service to delete.
 */
function commerce_colissimo_service_delete_page($name) {
  return drupal_get_form('commerce_colissimo_service_delete_form', commerce_shipping_service_load($name));
}
