<?php
/**
 * @file
 * hyx_livre.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hyx_livre_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:full';
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2dec0162-1aec-4442-856e-9f3c865f1d60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-77eebee3-40ed-47b6-a065-e74c0fd1bbfa';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77eebee3-40ed-47b6-a065-e74c0fd1bbfa';
    $display->content['new-77eebee3-40ed-47b6-a065-e74c0fd1bbfa'] = $pane;
    $display->panels['right'][0] = 'new-77eebee3-40ed-47b6-a065-e74c0fd1bbfa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-77eebee3-40ed-47b6-a065-e74c0fd1bbfa';
  $panelizer->display = $display;
  $export['node:page:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:livre_liste';
  $panelizer->title = 'Liste de livres';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '9',
          'lg' => '9',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '763cd94e-2659-4906-aa70-24ab379f656d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c3e0c2d-b3ed-42b7-98f8-e53a11cf108d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c3e0c2d-b3ed-42b7-98f8-e53a11cf108d';
    $display->content['new-0c3e0c2d-b3ed-42b7-98f8-e53a11cf108d'] = $pane;
    $display->panels['right'][0] = 'new-0c3e0c2d-b3ed-42b7-98f8-e53a11cf108d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0c3e0c2d-b3ed-42b7-98f8-e53a11cf108d';
  $panelizer->display = $display;
  $export['node:page:livre_liste'] = $panelizer;

  return $export;
}
