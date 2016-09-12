<?php
/**
 * @file
 * hyx_commerce.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hyx_commerce_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_product-product-field_dimensions'.
  $field_instances['commerce_product-product-field_dimensions'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
        'weight' => 1,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
        'weight' => 2,
      ),
      'node_teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser_livre' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_dimensions',
    'label' => 'Dimensions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'cm',
        'unit_select_list' => 1,
      ),
      'type' => 'physical_dimensions_textfields',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'commerce_product-product-field_poids'.
  $field_instances['commerce_product-product-field_poids'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_weight_formatted',
        'weight' => 2,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_weight_formatted',
        'weight' => 3,
      ),
      'node_teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser_livre' => array(
        'label' => 'inline',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_weight_formatted',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_poids',
    'label' => 'Poids',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'g',
        'unit_select_list' => 0,
      ),
      'type' => 'physical_weight_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dimensions');
  t('Poids');

  return $field_instances;
}
