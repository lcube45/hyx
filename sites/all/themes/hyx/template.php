<?php

function hyx_preprocess_page(&$variables) {

  // block de locale
  $variables['locale'] = module_invoke('locale', 'block_view', 'language');

  // block panier
  $variables['cart'] = module_invoke('hyx_content', 'block_view', 'hyx_cart');

  // block de recherche
  $variables['search_block_form'] = module_invoke('search_api_page', 'block_view', 'hyxsearchpage');

  // menu user
  $variables['menu_user'] = menu_tree('user-menu');

    //$variables['logo'] = image_style_url('my_image_style', $variables['logo']);
}

function hyx_menu_tree__menu_footer(&$variables){
  return '<ul class="list-inline">' . $variables['tree'] . '</ul>';
}

function hyx_menu_tree__user_menu(&$variables){
  return '<ul class="list-inline">' . $variables['tree'] . '</ul>';
}

function hyx_links__locale_block(&$variables) {
  $variables['attributes']['class'][] = 'list-inline';
  //$variables['attributes']['class'][] = 'pull-right';
  $content = theme_links($variables);
  return $content;
}


function hyx_form_search_api_page_search_form_hyxsearchpage_alter(&$form, &$form_state, $form_id) {
  unset($form['#theme_wrappers']);
  $form['#theme_wrappers'][0] = 'bootstrap_search_form_wrapper';
  $form['#theme_wrappers'][1] = 'form';
  $form['#attributes']['class'][] = 'navbar-right';
  $form['#attributes']['class'][] = 'navbar-form';
  $form['submit_1']['#attributes']['class'][] = 'element-invisible';
  $form['keys_1']['#title'] = '';
  $form['keys_1']['#size'] = 30;
}

function hyx_form_element_label($vars) {
  if(isset($vars['element']['#id']) &&  $vars['element']['#id'] == 'edit-keys-1') {
    return null;
  }
}