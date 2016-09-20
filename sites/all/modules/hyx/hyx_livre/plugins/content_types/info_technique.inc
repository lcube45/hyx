<?php
$plugin = array(
  'title' => t('HYX infos techniques pane'),
  'single' => FALSE,
  'description' => t('HYX infos techniques pane'),
  'category' => array('HYX'),
  //'required context' => new ctools_context_required(t('Node'), 'node'),
  'all contexts' => true
);

/**
 * Title callback for admin page.
 */
function hyx_livre_info_technique_admin_title($subtype, $conf, $context = NULL) {
  return t('HYX infos techniques pane');
}

/**
 * Callback to provide administrative info (the preview in panels when building a panel).
 */
function hyx_livre_info_technique_admin_info($subtype, $conf, $context = NULL) {

  $block = new stdClass();
  $block->title = t('HYX infos techniques pane');

  if($conf['override_title'] == TRUE) {
    $title_value = '<b>' . $conf['override_title_text'] . '</b>';
  } else {
    $title_value = t('Not Set');
  }

  $config = array();
  $config[] = t('Title') . ': ' . $title_value;
  $block->content = theme_item_list(array( 'items' => $config, 'title' => NULL, 'type' => 'ul', 'attributes' => array() ));
  return $block;
}

/**
 * Edit callback for the content type.
 */
function hyx_livre_info_technique_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit callback for settings form.
 */
function hyx_livre_info_technique_content_type_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function hyx_livre_info_technique_content_type_render($subtype, $conf, $panel_args, $context) {

  $block = new stdClass();
  $block->title = t('Informations');

  $items = array();
  $node = $context['panelizer']->data;
  $node_view = node_view($node, 'full');

  $items[] = array('data' => $node_view['product:commerce_price']);
  $items[] = array('data' => $node_view['field_langue']);
  $items[] = array('data' => $node_view['product:sku']);
  if(isset($node_view['field_nb_page'])){
    $items[] = array('data' => $node_view['field_nb_page']);
  }
  if(isset($node_view['field_couleur'])){
    $items[] = array('data' => $node_view['field_couleur']);
  }
  if(isset($node_view['field_type_reliure'])){
    $items[] = array('data' => $node_view['field_type_reliure']);
  }
  if(isset($node_view['product:field_dimensions'])){
    $items[] = array('data' => $node_view['product:field_dimensions']);
  }
  if(isset($node_view['product:field_poids'])){
    $items[] = array('data' => $node_view['product:field_poids']);
  }
  if(isset($node_view['field_partenaire'])){
    $items[] = array('data' => $node_view['field_partenaire']);
  }
  if(isset($node_view['field_auteur'])){
    $items[] = array('data' => $node_view['field_auteur']);
  }

  $block->content = theme('item_list', array('items' => $items));

  return $block;

}