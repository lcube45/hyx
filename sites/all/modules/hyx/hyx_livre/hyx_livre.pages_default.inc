<?php
/**
 * @file
 * hyx_livre.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hyx_livre_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_912dea7b-9fa2-4cab-85d2-34c67baa5749';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Livre',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'livre' => 'livre',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6990b023-1fb0-412f-9be3-3b16f302edf4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_912dea7b-9fa2-4cab-85d2-34c67baa5749';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23f33840-4297-4095-8c5f-6341c7314ee0';
  $pane->panel = 'content_main';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '23f33840-4297-4095-8c5f-6341c7314ee0';
  $display->content['new-23f33840-4297-4095-8c5f-6341c7314ee0'] = $pane;
  $display->panels['content_main'][0] = 'new-23f33840-4297-4095-8c5f-6341c7314ee0';
  $pane = new stdClass();
  $pane->pid = 'new-8a904e6f-cb25-47a2-af17-c0b0dd96782c';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_soustitre';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '8a904e6f-cb25-47a2-af17-c0b0dd96782c';
  $display->content['new-8a904e6f-cb25-47a2-af17-c0b0dd96782c'] = $pane;
  $display->panels['content_main'][1] = 'new-8a904e6f-cb25-47a2-af17-c0b0dd96782c';
  $pane = new stdClass();
  $pane->pid = 'new-dbd33416-c7df-47f1-8add-6e0830465351';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_sommaire';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'dbd33416-c7df-47f1-8add-6e0830465351';
  $display->content['new-dbd33416-c7df-47f1-8add-6e0830465351'] = $pane;
  $display->panels['content_main'][2] = 'new-dbd33416-c7df-47f1-8add-6e0830465351';
  $pane = new stdClass();
  $pane->pid = 'new-34aa410f-a5d1-48f4-80fa-c7efa5460c65';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '34aa410f-a5d1-48f4-80fa-c7efa5460c65';
  $display->content['new-34aa410f-a5d1-48f4-80fa-c7efa5460c65'] = $pane;
  $display->panels['content_main'][3] = 'new-34aa410f-a5d1-48f4-80fa-c7efa5460c65';
  $pane = new stdClass();
  $pane->pid = 'new-1031459a-c612-4026-b65c-2f276af21779';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_produit';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '1031459a-c612-4026-b65c-2f276af21779';
  $display->content['new-1031459a-c612-4026-b65c-2f276af21779'] = $pane;
  $display->panels['content_main'][4] = 'new-1031459a-c612-4026-b65c-2f276af21779';
  $pane = new stdClass();
  $pane->pid = 'new-bf26bd49-9a9a-466b-acdc-d4fc2085bd35';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_fichier';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'bf26bd49-9a9a-466b-acdc-d4fc2085bd35';
  $display->content['new-bf26bd49-9a9a-466b-acdc-d4fc2085bd35'] = $pane;
  $display->panels['content_main'][5] = 'new-bf26bd49-9a9a-466b-acdc-d4fc2085bd35';
  $pane = new stdClass();
  $pane->pid = 'new-6e9fea9a-e065-4661-91ca-17ea0270cb0e';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '6e9fea9a-e065-4661-91ca-17ea0270cb0e';
  $display->content['new-6e9fea9a-e065-4661-91ca-17ea0270cb0e'] = $pane;
  $display->panels['content_main'][6] = 'new-6e9fea9a-e065-4661-91ca-17ea0270cb0e';
  $pane = new stdClass();
  $pane->pid = 'new-273d36be-ed27-4972-9f75-a99d1064a512';
  $pane->panel = 'content_main';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_document';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '273d36be-ed27-4972-9f75-a99d1064a512';
  $display->content['new-273d36be-ed27-4972-9f75-a99d1064a512'] = $pane;
  $display->panels['content_main'][7] = 'new-273d36be-ed27-4972-9f75-a99d1064a512';
  $pane = new stdClass();
  $pane->pid = 'new-9b2ea676-8532-4308-9a59-0c8efc3eb2af';
  $pane->panel = 'content_main';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '9b2ea676-8532-4308-9a59-0c8efc3eb2af';
  $display->content['new-9b2ea676-8532-4308-9a59-0c8efc3eb2af'] = $pane;
  $display->panels['content_main'][8] = 'new-9b2ea676-8532-4308-9a59-0c8efc3eb2af';
  $pane = new stdClass();
  $pane->pid = 'new-871515f3-695f-4ae7-9940-3f4f0e43b3ae';
  $pane->panel = 'footer';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '871515f3-695f-4ae7-9940-3f4f0e43b3ae';
  $display->content['new-871515f3-695f-4ae7-9940-3f4f0e43b3ae'] = $pane;
  $display->panels['footer'][0] = 'new-871515f3-695f-4ae7-9940-3f4f0e43b3ae';
  $pane = new stdClass();
  $pane->pid = 'new-0ed12f2c-a382-4a64-a535-e3253b7c4556';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_language';
  $pane->subtype = 'node_form_language';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '0ed12f2c-a382-4a64-a535-e3253b7c4556';
  $display->content['new-0ed12f2c-a382-4a64-a535-e3253b7c4556'] = $pane;
  $display->panels['sidebar'][0] = 'new-0ed12f2c-a382-4a64-a535-e3253b7c4556';
  $pane = new stdClass();
  $pane->pid = 'new-0e6a1882-f460-4a7b-baa4-d3ab0b9f587c';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_auteur';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '0e6a1882-f460-4a7b-baa4-d3ab0b9f587c';
  $display->content['new-0e6a1882-f460-4a7b-baa4-d3ab0b9f587c'] = $pane;
  $display->panels['sidebar'][1] = 'new-0e6a1882-f460-4a7b-baa4-d3ab0b9f587c';
  $pane = new stdClass();
  $pane->pid = 'new-d9ae0176-6938-47a3-a43b-b708a11f209c';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_collection';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'd9ae0176-6938-47a3-a43b-b708a11f209c';
  $display->content['new-d9ae0176-6938-47a3-a43b-b708a11f209c'] = $pane;
  $display->panels['sidebar'][2] = 'new-d9ae0176-6938-47a3-a43b-b708a11f209c';
  $pane = new stdClass();
  $pane->pid = 'new-4bf79659-200c-49c3-8ad7-67757776c4f0';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_thematique';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '4bf79659-200c-49c3-8ad7-67757776c4f0';
  $display->content['new-4bf79659-200c-49c3-8ad7-67757776c4f0'] = $pane;
  $display->panels['sidebar'][3] = 'new-4bf79659-200c-49c3-8ad7-67757776c4f0';
  $pane = new stdClass();
  $pane->pid = 'new-f09c2f23-96f8-4eb8-b21f-7a68cdfe8b37';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_langue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'f09c2f23-96f8-4eb8-b21f-7a68cdfe8b37';
  $display->content['new-f09c2f23-96f8-4eb8-b21f-7a68cdfe8b37'] = $pane;
  $display->panels['sidebar'][4] = 'new-f09c2f23-96f8-4eb8-b21f-7a68cdfe8b37';
  $pane = new stdClass();
  $pane->pid = 'new-6de8ccaf-ffc0-4506-93fa-9a3dedce557f';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '6de8ccaf-ffc0-4506-93fa-9a3dedce557f';
  $display->content['new-6de8ccaf-ffc0-4506-93fa-9a3dedce557f'] = $pane;
  $display->panels['sidebar'][5] = 'new-6de8ccaf-ffc0-4506-93fa-9a3dedce557f';
  $pane = new stdClass();
  $pane->pid = 'new-27726817-6819-41e6-98b9-b44cefa514a7';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_livre_similaire';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '27726817-6819-41e6-98b9-b44cefa514a7';
  $display->content['new-27726817-6819-41e6-98b9-b44cefa514a7'] = $pane;
  $display->panels['sidebar'][6] = 'new-27726817-6819-41e6-98b9-b44cefa514a7';
  $pane = new stdClass();
  $pane->pid = 'new-0e274127-d01f-4191-93d7-765e5a944ee6';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '0e274127-d01f-4191-93d7-765e5a944ee6';
  $display->content['new-0e274127-d01f-4191-93d7-765e5a944ee6'] = $pane;
  $display->panels['sidebar'][7] = 'new-0e274127-d01f-4191-93d7-765e5a944ee6';
  $pane = new stdClass();
  $pane->pid = 'new-3979421d-c035-4e80-a0de-38e1bf507864';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_nb_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '3979421d-c035-4e80-a0de-38e1bf507864';
  $display->content['new-3979421d-c035-4e80-a0de-38e1bf507864'] = $pane;
  $display->panels['sidebar'][8] = 'new-3979421d-c035-4e80-a0de-38e1bf507864';
  $pane = new stdClass();
  $pane->pid = 'new-b82ec4ff-2e4b-4048-abcf-3a1622deb7cf';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_couleur';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'b82ec4ff-2e4b-4048-abcf-3a1622deb7cf';
  $display->content['new-b82ec4ff-2e4b-4048-abcf-3a1622deb7cf'] = $pane;
  $display->panels['sidebar'][9] = 'new-b82ec4ff-2e4b-4048-abcf-3a1622deb7cf';
  $pane = new stdClass();
  $pane->pid = 'new-fa8a39aa-4152-4840-b91c-7f1c053dcb46';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_type_reliure';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'fa8a39aa-4152-4840-b91c-7f1c053dcb46';
  $display->content['new-fa8a39aa-4152-4840-b91c-7f1c053dcb46'] = $pane;
  $display->panels['sidebar'][10] = 'new-fa8a39aa-4152-4840-b91c-7f1c053dcb46';
  $pane = new stdClass();
  $pane->pid = 'new-1f7d8cf7-0238-43e2-95fd-332a90ca0e23';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_partenaire';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '1f7d8cf7-0238-43e2-95fd-332a90ca0e23';
  $display->content['new-1f7d8cf7-0238-43e2-95fd-332a90ca0e23'] = $pane;
  $display->panels['sidebar'][11] = 'new-1f7d8cf7-0238-43e2-95fd-332a90ca0e23';
  $pane = new stdClass();
  $pane->pid = 'new-2daeab1d-5226-4795-afd6-8ad4d6b7f509';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_lien';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '2daeab1d-5226-4795-afd6-8ad4d6b7f509';
  $display->content['new-2daeab1d-5226-4795-afd6-8ad4d6b7f509'] = $pane;
  $display->panels['sidebar'][12] = 'new-2daeab1d-5226-4795-afd6-8ad4d6b7f509';
  $pane = new stdClass();
  $pane->pid = 'new-0d3cfe03-764e-41cb-9f38-9d8d4957e11e';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '0d3cfe03-764e-41cb-9f38-9d8d4957e11e';
  $display->content['new-0d3cfe03-764e-41cb-9f38-9d8d4957e11e'] = $pane;
  $display->panels['sidebar'][13] = 'new-0d3cfe03-764e-41cb-9f38-9d8d4957e11e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-23f33840-4297-4095-8c5f-6341c7314ee0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_912dea7b-9fa2-4cab-85d2-34c67baa5749'] = $handler;

  return $export;
}
