<?php
/**
 * @file
 * hyx_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hyx_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:blog:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'hyx_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
      'middle' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
      'center' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
      'bottom' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
          'xs' => '0',
          'sm' => '0',
          'md' => '9',
          'lg' => '0',
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
          'md' => '3',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '3',
          'lg' => '0',
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
          'md' => '9',
          'lg' => '0',
        ),
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'center' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0bf89106-fdb9-4ea1-a3b4-96f6c023ce71';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:blog:default:full';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40a5dace-fde0-41be-8b4f-c3264f2f6a4b';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'flippy-flippy_pager-node_type-blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'A lire également',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40a5dace-fde0-41be-8b4f-c3264f2f6a4b';
  $display->content['new-40a5dace-fde0-41be-8b4f-c3264f2f6a4b'] = $pane;
  $display->panels['bottom'][0] = 'new-40a5dace-fde0-41be-8b4f-c3264f2f6a4b';
  $pane = new stdClass();
  $pane->pid = 'new-169a0184-472c-425c-bda0-d40c6a48b807';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'i18n_taxonomy_term_reference_link',
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
  $pane->uuid = '169a0184-472c-425c-bda0-d40c6a48b807';
  $display->content['new-169a0184-472c-425c-bda0-d40c6a48b807'] = $pane;
  $display->panels['center'][0] = 'new-169a0184-472c-425c-bda0-d40c6a48b807';
  $pane = new stdClass();
  $pane->pid = 'new-ae140eee-3dee-4c15-b4e1-f6ab058f234e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'lead',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae140eee-3dee-4c15-b4e1-f6ab058f234e';
  $display->content['new-ae140eee-3dee-4c15-b4e1-f6ab058f234e'] = $pane;
  $display->panels['middle'][0] = 'new-ae140eee-3dee-4c15-b4e1-f6ab058f234e';
  $pane = new stdClass();
  $pane->pid = 'new-4f7fb807-3efd-4d3d-806b-c4de75bdf4c7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'hyx_blog_large',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4f7fb807-3efd-4d3d-806b-c4de75bdf4c7';
  $display->content['new-4f7fb807-3efd-4d3d-806b-c4de75bdf4c7'] = $pane;
  $display->panels['middle'][1] = 'new-4f7fb807-3efd-4d3d-806b-c4de75bdf4c7';
  $pane = new stdClass();
  $pane->pid = 'new-f427dd37-6b27-4102-b47c-97dd2e90c42b';
  $pane->panel = 'middle';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f427dd37-6b27-4102-b47c-97dd2e90c42b';
  $display->content['new-f427dd37-6b27-4102-b47c-97dd2e90c42b'] = $pane;
  $display->panels['middle'][2] = 'new-f427dd37-6b27-4102-b47c-97dd2e90c42b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:blog:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->name = 'node:blog:default:teaser';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '4',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
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
      'middle' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9942e1ea-c6ce-46ad-a4c4-feff88ad4fb8';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:blog:default:teaser';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60637b77-ce01-45e8-a463-f103377a9cb1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => 'content',
    ),
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
  $pane->uuid = '60637b77-ce01-45e8-a463-f103377a9cb1';
  $display->content['new-60637b77-ce01-45e8-a463-f103377a9cb1'] = $pane;
  $display->panels['left'][0] = 'new-60637b77-ce01-45e8-a463-f103377a9cb1';
  $pane = new stdClass();
  $pane->pid = 'new-e9bcfbf6-76b7-4c38-92d9-8e6506d678f4';
  $pane->panel = 'right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h3',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e9bcfbf6-76b7-4c38-92d9-8e6506d678f4';
  $display->content['new-e9bcfbf6-76b7-4c38-92d9-8e6506d678f4'] = $pane;
  $display->panels['right'][0] = 'new-e9bcfbf6-76b7-4c38-92d9-8e6506d678f4';
  $pane = new stdClass();
  $pane->pid = 'new-d85bf0be-0bca-41b2-b6dd-cff779cb2427';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd85bf0be-0bca-41b2-b6dd-cff779cb2427';
  $display->content['new-d85bf0be-0bca-41b2-b6dd-cff779cb2427'] = $pane;
  $display->panels['right'][1] = 'new-d85bf0be-0bca-41b2-b6dd-cff779cb2427';
  $pane = new stdClass();
  $pane->pid = 'new-04fa1b1c-4cd3-459d-a0f5-f24c9e043f98';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '04fa1b1c-4cd3-459d-a0f5-f24c9e043f98';
  $display->content['new-04fa1b1c-4cd3-459d-a0f5-f24c9e043f98'] = $pane;
  $display->panels['right'][2] = 'new-04fa1b1c-4cd3-459d-a0f5-f24c9e043f98';
  $pane = new stdClass();
  $pane->pid = 'new-d6e34fb2-d90e-45a8-895e-5f0e108a48e3';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_categorie';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd6e34fb2-d90e-45a8-895e-5f0e108a48e3';
  $display->content['new-d6e34fb2-d90e-45a8-895e-5f0e108a48e3'] = $pane;
  $display->panels['right'][3] = 'new-d6e34fb2-d90e-45a8-895e-5f0e108a48e3';
  $pane = new stdClass();
  $pane->pid = 'new-6f137d46-c8ae-463f-8e3b-611e8b6c6aee';
  $pane->panel = 'right';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'teaser',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
    'css_id' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6f137d46-c8ae-463f-8e3b-611e8b6c6aee';
  $display->content['new-6f137d46-c8ae-463f-8e3b-611e8b6c6aee'] = $pane;
  $display->panels['right'][4] = 'new-6f137d46-c8ae-463f-8e3b-611e8b6c6aee';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-60637b77-ce01-45e8-a463-f103377a9cb1';
  $panelizer->display = $display;
  $export['node:blog:default:teaser'] = $panelizer;

  return $export;
}
