<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('One Column'),
  'category' => t('HYX'),
  'icon' => 'hyx_onecol.png',
  'theme' => 'hyx_onecol',
  'admin css' => '../hyx-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle'),
    'center' => t('Center'),
    'bottom' => t('Bottom'),
  ),
);
