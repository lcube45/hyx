<?php
/**
 * @file
 * This file contains no working PHP code; it exists to provide additional
 * documentation for doxygen as well as to document hooks in the standard
 * Drupal manner.
 */

/**
 * Allows module to define custom rates table for Colissimo shipping services.
 *
 * Commerce_colissimo module itself doesn't contain any rates table but knows
 * how to handles rates table specific to "La poste" service, with their
 * "Recommendation" system
 *
 * hook_commerce_colissimo_rates_table_info() expects an array in the following
 * format :
 * array(
 *  'service_key_name-1' => array(
 *    'title' => Title of the rates table
 *    'rates_table_callback' => Callback function returning a rate table.
 *    'recommendation_levels_table_callback' => Callback function returning a
 *      recommendation levels table.
 *    ),
 *  'service_key_name_2' => array(
 *    ...
 *    ),
 *
 * 'rates_table_callback' expects a table of this form :
 *    For rates with recommendation levels :
 *
 *    $rates = array(
 *      array(
 *        'weight' => weight limit,
 *        'reco' => array(
 *          parcel value => price,
 *          20000 => 1185,
 *          40000 => 1305,
 *          60000 => 1425,
 *          80000 => 1545,
 *          ),
 *        ),
 *      array(
 *        'weight' => 1,
 *        'reco' => array(
 *          ...
 *          ),
 *        ),
 *
 *    For rates without recommendation levels :
 *
 *    $rates = array(
 *      array(
 *        'weight' => weight limit,
 *        'price' => price,
 *        ),
 *      array(
 *        ...
 *        ),
 */

function hook_commerce_colissimo_rates_table_info() {
  $rates_table = array(
    '2011_COLISSIMO_RECOMMANDE_METROPOLE' => array(
      'title' => 'Colissimo recommandé Metropole (2011)',
      'rates_table_callback' => 'commerce_colissimo_get_rates_france_metropole_recommande',
      'recommendation_levels_table_callback' => 'commerce_colissimo_get_rates_france_metropole_recommande_recommendation_levels',
    ),
    '2011_COLISSIMO_RECOMMANDE_DOM1' => array(
      'title' => 'Colissimo recommandé Dom 1 (2011)',
      'rates_table_callback' => 'commerce_colissimo_get_rates_om1_recommande',
      'recommendation_levels_table_callback' => 'commerce_colissimo_get_rates_om1_recommande_recommendation_levels',
    ),
  );
  return $rates_table;
}