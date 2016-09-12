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
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'livre';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:livre:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H4';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Multiple terms from node',
      'keyword' => 'terms',
      'name' => 'terms_from_node',
      'vocabulary' => array(
        'thematique' => 'thematique',
        'tags' => 0,
        'collection' => 0,
        'langue' => 0,
        'categorie' => 0,
      ),
      'concatenator' => '+',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'hyx_twocol_livre';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
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
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '8',
          'lg' => '8',
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
      'top-left' => array(
        'css_id' => '',
        'css_class' => 'hyx-cover-single',
        'column' => array(
          'xs' => '0',
          'sm' => '4',
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
      'top-right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '0',
          'sm' => '8',
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
      'center-left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '8',
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
      'center-right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
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
      'bottom-left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '8',
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
      'bottom-right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
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
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'top-left' => array(
      'style' => 'bootstrap_region',
    ),
    'top-right' => array(
      'style' => 'bootstrap_region',
    ),
    'center-left' => array(
      'style' => 'bootstrap_region',
    ),
    'center-right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom-left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom-right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f823bec4-7bd9-4010-8d34-f533a314eefc';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:livre:default:full';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54df415a-a39c-4f9c-964f-5828ffa38bcb';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Tags',
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
  $pane->uuid = '54df415a-a39c-4f9c-964f-5828ffa38bcb';
  $display->content['new-54df415a-a39c-4f9c-964f-5828ffa38bcb'] = $pane;
  $display->panels['bottom'][0] = 'new-54df415a-a39c-4f9c-964f-5828ffa38bcb';
  $pane = new stdClass();
  $pane->pid = 'new-d933ed98-e66e-4c49-89cf-430d2037c841';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'hyx_livre_conseille-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd933ed98-e66e-4c49-89cf-430d2037c841';
  $display->content['new-d933ed98-e66e-4c49-89cf-430d2037c841'] = $pane;
  $display->panels['bottom'][1] = 'new-d933ed98-e66e-4c49-89cf-430d2037c841';
  $pane = new stdClass();
  $pane->pid = 'new-3e013712-2c4a-4655-87b6-0a35a771eaf1';
  $pane->panel = 'bottom-left';
  $pane->type = 'info_technique';
  $pane->subtype = 'info_technique';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-rvKfFgxPtZoq4xdaP4X6z8wTsZreA_NPJYEtq3u7i3A',
    'form_token' => 'FZ3NjU9LLrReCL-j95TYNQ5MUxs_mxq_0Z-1hbQVzHc',
    'form_id' => 'hyx_livre_info_technique_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3e013712-2c4a-4655-87b6-0a35a771eaf1';
  $display->content['new-3e013712-2c4a-4655-87b6-0a35a771eaf1'] = $pane;
  $display->panels['bottom-left'][0] = 'new-3e013712-2c4a-4655-87b6-0a35a771eaf1';
  $pane = new stdClass();
  $pane->pid = 'new-8cc91803-500a-4195-b812-5079dd2780c5';
  $pane->panel = 'bottom-right';
  $pane->type = 'info_ressource';
  $pane->subtype = 'info_ressource';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-fM6QQkBleK8B2PYPWfaEr8lfvCMJ2OxSvrvgIAet6jQ',
    'form_token' => 'eDJwO7DVaU9EI9gXyObjrsF21GQnxYBo2Gxc38Zy-_8',
    'form_id' => 'hyx_livre_info_ressource_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cc91803-500a-4195-b812-5079dd2780c5';
  $display->content['new-8cc91803-500a-4195-b812-5079dd2780c5'] = $pane;
  $display->panels['bottom-right'][0] = 'new-8cc91803-500a-4195-b812-5079dd2780c5';
  $pane = new stdClass();
  $pane->pid = 'new-798e3e7a-3fd4-48bf-9540-69a9aafb8a94';
  $pane->panel = 'center-left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '798e3e7a-3fd4-48bf-9540-69a9aafb8a94';
  $display->content['new-798e3e7a-3fd4-48bf-9540-69a9aafb8a94'] = $pane;
  $display->panels['center-left'][0] = 'new-798e3e7a-3fd4-48bf-9540-69a9aafb8a94';
  $pane = new stdClass();
  $pane->pid = 'new-49dcb371-525a-4de3-becc-5e5a9b4a475c';
  $pane->panel = 'center-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sommaire';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '49dcb371-525a-4de3-becc-5e5a9b4a475c';
  $display->content['new-49dcb371-525a-4de3-becc-5e5a9b4a475c'] = $pane;
  $display->panels['center-right'][0] = 'new-49dcb371-525a-4de3-becc-5e5a9b4a475c';
  $pane = new stdClass();
  $pane->pid = 'new-8cc55995-fa5c-4717-b1a0-468ec942649f';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_fichier';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'file_rendered',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'file_view_mode' => 'teaser',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => 'Extrait(s)',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cc55995-fa5c-4717-b1a0-468ec942649f';
  $display->content['new-8cc55995-fa5c-4717-b1a0-468ec942649f'] = $pane;
  $display->panels['middle'][0] = 'new-8cc55995-fa5c-4717-b1a0-468ec942649f';
  $pane = new stdClass();
  $pane->pid = 'new-0f4fa3d6-8ce7-4be9-a347-712c413e30fb';
  $pane->panel = 'top-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'large',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0f4fa3d6-8ce7-4be9-a347-712c413e30fb';
  $display->content['new-0f4fa3d6-8ce7-4be9-a347-712c413e30fb'] = $pane;
  $display->panels['top-left'][0] = 'new-0f4fa3d6-8ce7-4be9-a347-712c413e30fb';
  $pane = new stdClass();
  $pane->pid = 'new-41c71c91-40cb-4606-a592-7d298d2ab60e';
  $pane->panel = 'top-right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
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
  $pane->uuid = '41c71c91-40cb-4606-a592-7d298d2ab60e';
  $display->content['new-41c71c91-40cb-4606-a592-7d298d2ab60e'] = $pane;
  $display->panels['top-right'][0] = 'new-41c71c91-40cb-4606-a592-7d298d2ab60e';
  $pane = new stdClass();
  $pane->pid = 'new-c01ca002-57b1-49d3-a679-b0cbb8d0e850';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_soustitre';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c01ca002-57b1-49d3-a679-b0cbb8d0e850';
  $display->content['new-c01ca002-57b1-49d3-a679-b0cbb8d0e850'] = $pane;
  $display->panels['top-right'][1] = 'new-c01ca002-57b1-49d3-a679-b0cbb8d0e850';
  $pane = new stdClass();
  $pane->pid = 'new-689c2fc4-9022-45b3-ad0b-ad6be87d0a5a';
  $pane->panel = 'top-right';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '689c2fc4-9022-45b3-ad0b-ad6be87d0a5a';
  $display->content['new-689c2fc4-9022-45b3-ad0b-ad6be87d0a5a'] = $pane;
  $display->panels['top-right'][2] = 'new-689c2fc4-9022-45b3-ad0b-ad6be87d0a5a';
  $pane = new stdClass();
  $pane->pid = 'new-d5b2580d-6126-44d6-9d48-cecb216d3cf4';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_collection';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd5b2580d-6126-44d6-9d48-cecb216d3cf4';
  $display->content['new-d5b2580d-6126-44d6-9d48-cecb216d3cf4'] = $pane;
  $display->panels['top-right'][3] = 'new-d5b2580d-6126-44d6-9d48-cecb216d3cf4';
  $pane = new stdClass();
  $pane->pid = 'new-6169ee00-a64f-4dcb-885e-b27cccb8ca11';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_thematique';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6169ee00-a64f-4dcb-885e-b27cccb8ca11';
  $display->content['new-6169ee00-a64f-4dcb-885e-b27cccb8ca11'] = $pane;
  $display->panels['top-right'][4] = 'new-6169ee00-a64f-4dcb-885e-b27cccb8ca11';
  $pane = new stdClass();
  $pane->pid = 'new-9582b0f5-f337-4da1-830c-72d71acbb39b';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_langue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'i18n_taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9582b0f5-f337-4da1-830c-72d71acbb39b';
  $display->content['new-9582b0f5-f337-4da1-830c-72d71acbb39b'] = $pane;
  $display->panels['top-right'][5] = 'new-9582b0f5-f337-4da1-830c-72d71acbb39b';
  $pane = new stdClass();
  $pane->pid = 'new-e1223954-36f7-4a34-ba90-e402e4bc7c65';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:product:commerce_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e1223954-36f7-4a34-ba90-e402e4bc7c65';
  $display->content['new-e1223954-36f7-4a34-ba90-e402e4bc7c65'] = $pane;
  $display->panels['top-right'][6] = 'new-e1223954-36f7-4a34-ba90-e402e4bc7c65';
  $pane = new stdClass();
  $pane->pid = 'new-45678155-c59e-4a7b-95c0-7fad537a90ed';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_produit';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'combine' => 1,
      'default_quantity' => '1',
      'line_item_type' => 'product',
      'show_quantity' => 0,
      'show_single_product_attributes' => 0,
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
    'css_class' => 'text-center',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '45678155-c59e-4a7b-95c0-7fad537a90ed';
  $display->content['new-45678155-c59e-4a7b-95c0-7fad537a90ed'] = $pane;
  $display->panels['top-right'][7] = 'new-45678155-c59e-4a7b-95c0-7fad537a90ed';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-689c2fc4-9022-45b3-ad0b-ad6be87d0a5a';
  $panelizer->display = $display;
  $export['node:livre:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Liste des livres';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:page:livre_liste';
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
  $display->layout = 'hyx_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
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
      'default' => NULL,
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
      'bottom' => NULL,
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
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '763cd94e-2659-4906-aa70-24ab379f656d';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:page:livre_liste';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-abf02739-007a-46e6-b18d-5fc0d8f10ce0';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'hyx_livre-liste';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abf02739-007a-46e6-b18d-5fc0d8f10ce0';
  $display->content['new-abf02739-007a-46e6-b18d-5fc0d8f10ce0'] = $pane;
  $display->panels['left'][0] = 'new-abf02739-007a-46e6-b18d-5fc0d8f10ce0';
  $pane = new stdClass();
  $pane->pid = 'new-cabf907b-03c1-48ee-ad93-78f92cb2cf6b';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-rcs1nmY4C1qkzBd0q5voI1RIpQHtaVwC';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Thématique',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'facet-thematique',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cabf907b-03c1-48ee-ad93-78f92cb2cf6b';
  $display->content['new-cabf907b-03c1-48ee-ad93-78f92cb2cf6b'] = $pane;
  $display->panels['right'][0] = 'new-cabf907b-03c1-48ee-ad93-78f92cb2cf6b';
  $pane = new stdClass();
  $pane->pid = 'new-2c30c099-85d4-457d-a878-574daca055d3';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-B9Y1914fi53ViZQDzGYKMTOLNRa91P6M';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Collection',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c30c099-85d4-457d-a878-574daca055d3';
  $display->content['new-2c30c099-85d4-457d-a878-574daca055d3'] = $pane;
  $display->panels['right'][1] = 'new-2c30c099-85d4-457d-a878-574daca055d3';
  $pane = new stdClass();
  $pane->pid = 'new-ecd3daf0-cb05-4350-872a-4a27b467c11e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-T6580ix7eLJWwDXywMrErS0Ufz1qfsgk';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Langue',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ecd3daf0-cb05-4350-872a-4a27b467c11e';
  $display->content['new-ecd3daf0-cb05-4350-872a-4a27b467c11e'] = $pane;
  $display->panels['right'][2] = 'new-ecd3daf0-cb05-4350-872a-4a27b467c11e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:livre_liste'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'collection';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:collection:default';
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
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name';
  $display->uuid = 'c1ba624f-1779-40bd-8178-4f1782dac623';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:collection:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d100b8a-b9c5-4c09-b9ea-539e38f48cb3';
  $pane->panel = 'middle';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d100b8a-b9c5-4c09-b9ea-539e38f48cb3';
  $display->content['new-6d100b8a-b9c5-4c09-b9ea-539e38f48cb3'] = $pane;
  $display->panels['middle'][0] = 'new-6d100b8a-b9c5-4c09-b9ea-539e38f48cb3';
  $pane = new stdClass();
  $pane->pid = 'new-81dc5124-0a18-4552-b36e-a7e8ec51569f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'hyx_livre_taxonomy_term-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '81dc5124-0a18-4552-b36e-a7e8ec51569f';
  $display->content['new-81dc5124-0a18-4552-b36e-a7e8ec51569f'] = $pane;
  $display->panels['middle'][1] = 'new-81dc5124-0a18-4552-b36e-a7e8ec51569f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:collection:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'tags';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:tags:default';
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
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name';
  $display->uuid = 'e1680766-bfb7-4fac-8a60-5326ba8483e9';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:tags:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cf5ca7f3-63bb-4342-a8a7-0f6581113ede';
  $pane->panel = 'middle';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cf5ca7f3-63bb-4342-a8a7-0f6581113ede';
  $display->content['new-cf5ca7f3-63bb-4342-a8a7-0f6581113ede'] = $pane;
  $display->panels['middle'][0] = 'new-cf5ca7f3-63bb-4342-a8a7-0f6581113ede';
  $pane = new stdClass();
  $pane->pid = 'new-45c0c4cd-4206-4b4e-8408-186c822f800e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'hyx_tag_taxonomy_term-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '45c0c4cd-4206-4b4e-8408-186c822f800e';
  $display->content['new-45c0c4cd-4206-4b4e-8408-186c822f800e'] = $pane;
  $display->panels['middle'][1] = 'new-45c0c4cd-4206-4b4e-8408-186c822f800e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:tags:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Par défaut';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'thematique';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:thematique:default';
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
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name';
  $display->uuid = 'f90c5ea4-71b9-4c85-ab23-b30d2d02b771';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:thematique:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4399b02a-d642-4360-b4f2-f4a401e64716';
  $pane->panel = 'middle';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4399b02a-d642-4360-b4f2-f4a401e64716';
  $display->content['new-4399b02a-d642-4360-b4f2-f4a401e64716'] = $pane;
  $display->panels['middle'][0] = 'new-4399b02a-d642-4360-b4f2-f4a401e64716';
  $pane = new stdClass();
  $pane->pid = 'new-0f530c13-7695-4afe-9e65-4c25cd44a873';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'hyx_livre_taxonomy_term-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0f530c13-7695-4afe-9e65-4c25cd44a873';
  $display->content['new-0f530c13-7695-4afe-9e65-4c25cd44a873'] = $pane;
  $display->panels['middle'][1] = 'new-0f530c13-7695-4afe-9e65-4c25cd44a873';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:thematique:default'] = $panelizer;

  return $export;
}
