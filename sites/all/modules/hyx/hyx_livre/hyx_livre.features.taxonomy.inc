<?php
/**
 * @file
 * hyx_livre.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hyx_livre_taxonomy_default_vocabularies() {
  return array(
    'collection' => array(
      'name' => 'Collection',
      'machine_name' => 'collection',
      'description' => 'Vocabulaire des collections',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'langue' => array(
      'name' => 'Langue',
      'machine_name' => 'langue',
      'description' => 'Vocabulaire des langues',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Vocabulaire des tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'thematique' => array(
      'name' => 'Thématique',
      'machine_name' => 'thematique',
      'description' => 'Vocabulaire des thématiques des livres',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
