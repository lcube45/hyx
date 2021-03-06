<?php
/**
 * @file
 * hyx_livre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hyx_livre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
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
function hyx_livre_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hyx_livre_image_default_styles() {
  $styles = array();

  // Exported image style: livre_extrait.
  $styles['livre_extrait'] = array(
    'label' => 'Livre extrait',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => 190,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: livre_teaser.
  $styles['livre_teaser'] = array(
    'label' => 'Livre teaser',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hyx_livre_node_info() {
  $items = array(
    'livre' => array(
      'name' => t('Livre'),
      'base' => 'node_content',
      'description' => t('Type de contenu pour les livres'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
