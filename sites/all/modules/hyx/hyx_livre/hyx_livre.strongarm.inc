<?php
/**
 * @file
 * hyx_livre.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hyx_livre_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_livre';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_livre';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_livre';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_livre';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__livre';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_livre' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '26',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
          'teaser_livre' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_license_type' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_license_duration' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_file' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:field_dimensions' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_poids' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser_livre' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_livre';
  $strongarm->value = '1';
  $export['i18n_node_extended_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_livre';
  $strongarm->value = array(
    0 => 'current',
  );
  $export['i18n_node_options_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_livre';
  $strongarm->value = array();
  $export['i18n_sync_node_type_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_livre';
  $strongarm->value = '2';
  $export['language_content_type_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_livre';
  $strongarm->value = array();
  $export['menu_options_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_livre';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_livre';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_livre';
  $strongarm->value = '1';
  $export['node_preview_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_livre';
  $strongarm->value = 0;
  $export['node_submitted_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_livre';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_collection';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_tags';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_thematique';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:livre_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:20:"panelizer_node:livre";s:23:"allowed_layout_settings";a:58:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:24:"bootstrap_twocol_stacked";b:1;s:26:"bootstrap_threecol_stacked";b:1;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:1;s:20:"twocol_70_30_stacked";b:1;s:20:"twocol_63_37_stacked";b:1;s:20:"twocol_30_70_stacked";b:1;s:16:"threecol_7_62_31";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:19:"three_four_adaptive";b:1;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:livre_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:livre_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:livre_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:livre_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:livre_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:livre_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:livre_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:page";s:23:"allowed_layout_settings";a:58:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:24:"bootstrap_twocol_stacked";b:1;s:26:"bootstrap_threecol_stacked";b:1;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:1;s:20:"twocol_70_30_stacked";b:1;s:20:"twocol_63_37_stacked";b:1;s:20:"twocol_30_70_stacked";b:1;s:16:"threecol_7_62_31";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:19:"three_four_adaptive";b:1;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:collection_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:34:"panelizer_taxonomy_term:collection";s:23:"allowed_layout_settings";a:62:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:18:"hyx_twocol_stacked";b:1;s:16:"hyx_twocol_livre";b:1;s:17:"hyx_onecol_banner";b:1;s:10:"hyx_onecol";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:24:"bootstrap_twocol_stacked";b:1;s:26:"bootstrap_threecol_stacked";b:1;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:1;s:20:"twocol_70_30_stacked";b:1;s:20:"twocol_63_37_stacked";b:1;s:20:"twocol_30_70_stacked";b:1;s:16:"threecol_7_62_31";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:19:"three_four_adaptive";b:1;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_taxonomy_term:collection_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:collection_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:collection_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:collection_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:collection_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:collection_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'info_ressource' => 'info_ressource',
    'info_technique' => 'info_technique',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_taxonomy_term:collection_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:tags_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:28:"panelizer_taxonomy_term:tags";s:23:"allowed_layout_settings";a:62:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:18:"hyx_twocol_stacked";b:1;s:16:"hyx_twocol_livre";b:1;s:17:"hyx_onecol_banner";b:1;s:10:"hyx_onecol";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:24:"bootstrap_twocol_stacked";b:1;s:26:"bootstrap_threecol_stacked";b:1;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:1;s:20:"twocol_70_30_stacked";b:1;s:20:"twocol_63_37_stacked";b:1;s:20:"twocol_30_70_stacked";b:1;s:16:"threecol_7_62_31";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:19:"three_four_adaptive";b:1;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_taxonomy_term:tags_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:tags_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:tags_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:tags_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:tags_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:tags_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'info_ressource' => 'info_ressource',
    'info_technique' => 'info_technique',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_taxonomy_term:tags_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:thematique_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:34:"panelizer_taxonomy_term:thematique";s:23:"allowed_layout_settings";a:62:{s:8:"flexible";b:1;s:8:"six_pack";b:1;s:18:"onecol_reset_clean";b:1;s:12:"onecol_clean";b:1;s:6:"myriad";b:1;s:18:"hyx_twocol_stacked";b:1;s:16:"hyx_twocol_livre";b:1;s:17:"hyx_onecol_banner";b:1;s:10:"hyx_onecol";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:24:"bootstrap_twocol_stacked";b:1;s:26:"bootstrap_threecol_stacked";b:1;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:1;s:20:"twocol_70_30_stacked";b:1;s:20:"twocol_63_37_stacked";b:1;s:20:"twocol_30_70_stacked";b:1;s:16:"threecol_7_62_31";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:19:"three_four_adaptive";b:1;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:1;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:1;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panelizer_taxonomy_term:thematique_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:thematique_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:thematique_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:thematique_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_taxonomy_term:thematique_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:thematique_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'info_ressource' => 'info_ressource',
    'info_technique' => 'info_technique',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_taxonomy_term:thematique_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publish_button_content_type_livre';
  $strongarm->value = 1;
  $export['publish_button_content_type_livre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_livre';
  $strongarm->value = 'Enregistrer et ajouter les champs';
  $export['save_continue_livre'] = $strongarm;

  return $export;
}
