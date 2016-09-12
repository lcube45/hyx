<?php
/**
 * @file
 * hyx_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hyx_blog_taxonomy_default_vocabularies() {
  return array(
    'categorie' => array(
      'name' => 'Catégorie',
      'machine_name' => 'categorie',
      'description' => 'Catégorie des billets de blog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
