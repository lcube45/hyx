<?php
/**
 * @file
 * hyx_recherche.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hyx_recherche_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_api_page_hyxsearchpage__panel_context_92b9d905-2d20-4838-b018-322854727cba';
  $handler->task = 'search_api_page';
  $handler->subtask = 'hyxsearchpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panneau',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'hyx_twocol_stacked';
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
      'middle' => NULL,
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
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Recherche';
  $display->uuid = '4e5cb45a-480e-4876-9814-e069f07567f9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'search_api_page_hyxsearchpage__panel_context_92b9d905-2d20-4838-b018-322854727cba';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3b53dd2-02f0-45f4-aff2-726e1dc85282';
  $pane->panel = 'left';
  $pane->type = 'search_api_page_result';
  $pane->subtype = 'search_api_page_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'page' => 'hyxsearchpage',
    'per_page' => '20',
    'result_page_search_form' => 1,
    'get_per_page' => 0,
    'view_mode' => 'search_api_page_result',
    'context' => 'argument_string_1',
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
  $pane->uuid = 'c3b53dd2-02f0-45f4-aff2-726e1dc85282';
  $display->content['new-c3b53dd2-02f0-45f4-aff2-726e1dc85282'] = $pane;
  $display->panels['left'][0] = 'new-c3b53dd2-02f0-45f4-aff2-726e1dc85282';
  $pane = new stdClass();
  $pane->pid = 'new-acd23233-000a-4cba-a5a5-e1d417b66eab';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'acd23233-000a-4cba-a5a5-e1d417b66eab';
  $display->content['new-acd23233-000a-4cba-a5a5-e1d417b66eab'] = $pane;
  $display->panels['right'][0] = 'new-acd23233-000a-4cba-a5a5-e1d417b66eab';
  $pane = new stdClass();
  $pane->pid = 'new-39e1a2e5-fc8f-42e6-a554-986e44872ae0';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-rcs1nmY4C1qkzBd0q5voI1RIpQHtaVwC';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '39e1a2e5-fc8f-42e6-a554-986e44872ae0';
  $display->content['new-39e1a2e5-fc8f-42e6-a554-986e44872ae0'] = $pane;
  $display->panels['right'][1] = 'new-39e1a2e5-fc8f-42e6-a554-986e44872ae0';
  $pane = new stdClass();
  $pane->pid = 'new-a3a9c068-66d2-45eb-b372-efde70529dd2';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-B9Y1914fi53ViZQDzGYKMTOLNRa91P6M';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'a3a9c068-66d2-45eb-b372-efde70529dd2';
  $display->content['new-a3a9c068-66d2-45eb-b372-efde70529dd2'] = $pane;
  $display->panels['right'][2] = 'new-a3a9c068-66d2-45eb-b372-efde70529dd2';
  $pane = new stdClass();
  $pane->pid = 'new-9aa60c12-bda1-4bee-993f-e93feabf497e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-IPaCM7H1dF7Clj1WBtiZQw516MCvTYka';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '9aa60c12-bda1-4bee-993f-e93feabf497e';
  $display->content['new-9aa60c12-bda1-4bee-993f-e93feabf497e'] = $pane;
  $display->panels['right'][3] = 'new-9aa60c12-bda1-4bee-993f-e93feabf497e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_api_page_hyxsearchpage__panel_context_92b9d905-2d20-4838-b018-322854727cba'] = $handler;

  return $export;
}
