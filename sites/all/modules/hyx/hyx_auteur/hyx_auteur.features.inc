<?php
/**
 * @file
 * hyx_auteur.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hyx_auteur_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hyx_auteur_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hyx_auteur_node_info() {
  $items = array(
    'auteur' => array(
      'name' => t('Auteur'),
      'base' => 'node_content',
      'description' => t('Type de contenu pour les auteurs'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
