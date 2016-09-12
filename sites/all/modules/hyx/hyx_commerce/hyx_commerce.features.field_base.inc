<?php
/**
 * @file
 * hyx_commerce.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hyx_commerce_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_customer_telephone'.
  $field_bases['field_customer_telephone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_customer_telephone',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'telephone',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'telephone',
  );

  // Exported field_base: 'field_dimensions'.
  $field_bases['field_dimensions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dimensions',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'physical',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'physical_dimensions',
  );

  // Exported field_base: 'field_poids'.
  $field_bases['field_poids'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_poids',
    'indexes' => array(
      'weight' => array(
        0 => 'weight',
      ),
    ),
    'locked' => 0,
    'module' => 'physical',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'physical_weight',
  );

  return $field_bases;
}
