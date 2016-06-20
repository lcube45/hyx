<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns Livre'),
  'category' => t('HYX'),
  'icon' => 'hyx_twocol_livre.png',
  'theme' => 'hyx_twocol_livre',
  'admin css' => '../hyx-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'top-left' => t('Top Left'),
    'top-right' => t('Top Right'),
    'middle' => t('Middle'),
    'center-left' => t('Center Left'),
    'center-right' => t('Center Right'),
    'bottom-left' => t('Bottom Left'),
    'bottom-right' => t('Bottom Right'),
    'bottom' => t('Bottom'),
  ),
);
