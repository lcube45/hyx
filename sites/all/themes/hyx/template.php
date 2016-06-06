<?php

function hyx_preprocess_page(&$variables) {

  // block de locale
  $variables['locale'] = module_invoke('locale', 'block_view', 'language');

  // block panier
  $variables['cart'] = module_invoke('hyx_content', 'block_view', 'hyx_cart');

  // block de recherche
  $variables['search_block_form'] = module_invoke('search_api_page', 'block_view', 'hyxsearchpage');

  // menu user
  //$variables['menu_user'] = menu_tree('user-menu');
    //$variables['logo'] = image_style_url('my_image_style', $variables['logo']);
}

function hyx_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $element['#attributes']['class'][] = 'hyx-nav-link';
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function hyx_menu_tree__menu_footer(&$variables){
  return '<ul class="list-inline">' . $variables['tree'] . '</ul>';
}

function hyx_menu_tree__user_menu(&$variables){
  return '<ul class="hyx-header-toolbox">' . $variables['tree'] . '</ul>';
}

function hyx_links__locale_block(&$variables) {
  global $language;

  $output = '';
  $output.= '<div class="hyx-radio-list">';

  foreach($variables['links'] as $id => $link) {
    if($language->language == $id) {
      $attributes = array(
        'class' => array('btn hyx-radio'),
        'data-title-xs' => ucfirst($id),
      );
    } else {
      $attributes = array(
        'class' => array('btn hyx-radio'),
        'data-title-xs' => ucfirst($id),
      );
    }

    if(isset($link['href'])) {
      $output.= l($link['title'],$link['href'],array('attributes' => $attributes));
    } else {
      $output.= l($link['title'],'/'.$id,array('attributes' => $attributes));
    }
  }

  $output.= '</div>';

  return $output;
}

function hyx_form_search_api_page_search_form_hyxsearchpage_alter(&$form, &$form_state, $form_id) {
  unset($form['#theme_wrappers']);
  $form['#theme_wrappers'][0] = 'bootstrap_search_form_wrapper';
  $form['#theme_wrappers'][1] = 'form';
  $form['#attributes']['class'][] = 'navbar-right';
  $form['#attributes']['class'][] = 'navbar-form';
  $form['submit_1']['#attributes']['class'][] = 'element-invisible';
  $form['keys_1']['#title'] = '';
  $form['keys_1']['#size'] = 20;
  $form['keys_1']['#attributes'] = array('class' => array('hyx-form'));
}

function hyx_bootstrap_search_form_wrapper($variables) {
  $output = $variables['element']['#children'];
  $output .= '<button type="submit" class="btn hyx-button"><span class="hyx-icon-search"></span></button>';
  return $output;
}

function hyx_form_element_label($vars) {
  if(isset($vars['element']['#id']) &&  $vars['element']['#id'] == 'edit-keys-1') {
    return null;
  }
}

function hyx_preprocess_field(&$variables) {

  if($variables['element']['#field_name'] == 'field_langue') {
    $output = array();
    foreach($variables['items'] as $item) {
      $output[] = $item['#markup'];
    }
    unset($variables['items']);
    $variables['items'][0]['#markup'] = implode(', ',$output);
  }

  if($variables['element']['#field_name'] == 'field_produit') {

  }
}

function hyx_form_alter(&$form, $form_state, $form_id) {
  if ((strpos($form_id, 'commerce_cart_add_to_cart_form_') === 0)) {
    $form['submit']['#hide_text'] = true;
    $form['submit']['#icon'] = '<span class="hyx-icon-basket"></span>';
    $form['submit']['#cart'] = true;
  }
}

function hyx_button($variables) {
  $element = $variables['element'];

  // Allow button text to be appear hidden.
  // @see https://www.drupal.org/node/2327437
  $text = !empty($element['#hide_text']) ? '<span class="element-invisible">' . $element['#value'] . '</span>' : $element['#value'];

  // Add icons before or after the value.
  // @see https://www.drupal.org/node/2219965
  if (!empty($element['#icon'])) {
    if ($element['#icon_position'] === 'before') {
      $text = $element['#icon'] . ' ' . $text;
    }
    elseif ($element['#icon_position'] === 'after') {
      $text .= ' ' . $element['#icon'];
    }
  }

  if(isset($element['#cart'])) {
    unset($element['#attributes']['class']);
    $element['#attributes']['class'] = array('btn', 'hyx-button', 'cover-bt-add', 'form-submit');
  }

  // This line break adds inherent margin between multiple buttons.
  return '<button' . drupal_attributes($element['#attributes']) . '>' . $text . "</button>\n";
}