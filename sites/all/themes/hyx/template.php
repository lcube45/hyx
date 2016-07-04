<?php

function hyx_preprocess_page(&$variables) {

    if (!empty($variables['node']) && !empty($variables['node']->type)) {
        $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
    }

  // block de locale
  $variables['locale'] = module_invoke('locale', 'block_view', 'language');

  // block panier
  $variables['cart'] = module_invoke('hyx_content', 'block_view', 'hyx_cart');

  // block de recherche
  $variables['search_block_form'] = module_invoke('search_api_page', 'block_view', 'hyxsearchpage');

  // menu user
  //$variables['menu_user'] = menu_tree('user-menu');
    //$variables['logo'] = image_style_url('my_image_style', $variables['logo']);
}

function hyx_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $element['#attributes']['class'][] = 'hyx-nav-link';
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function hyx_menu_tree__menu_footer(&$variables){
  return '<ul class="list-inline">' . $variables['tree'] . '</ul>';
}

function hyx_menu_tree__user_menu(&$variables){
  return '<ul class="hyx-header-toolbox">' . $variables['tree'] . '</ul>';
}

function hyx_links__locale_block(&$variables) {

    global $language;

    $variables['attributes']['class'][] = 'list-inline';

    foreach($variables['links'] as $id => $link) {
        $variables['links'][$id]['attributes']['class'][] = 'btn hyx-radio';
        $variables['links'][$id]['attributes']['data-title-xs'] = ucfirst($id);
    }

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
  $form['keys_1']['#size'] = 20;
  $form['keys_1']['#attributes'] = array('class' => array('hyx-form'));
  $form['keys_1']['#attributes']['placeholder'] = t('Recherche');
}

function hyx_bootstrap_search_form_wrapper($variables) {
  $output = $variables['element']['#children'];
  $output .= '<button type="submit" class="btn hyx-button"><span class="hyx-icon-search"></span></button>';
  return $output;
}



function hyx_preprocess_field(&$variables) {

  if($variables['element']['#field_name'] == 'field_langue') {
    $output = array();
    foreach($variables['items'] as $item) {
      $output[] = $item['#markup'];
    }
    unset($variables['items']);
    $variables['items'][0]['#markup'] = implode(', ',$output);
  }

  if($variables['element']['#field_name'] == 'field_produit') {

  }
}

function hyx_form_alter(&$form, $form_state, $form_id) {

  if($form_id == 'sendinblue_signup_subscribe_block_newsletter_optin_fr_form') {
    $form['#attributes']['class'][] = 'hyx-newsletter';
    $form['fields']['EMAIL']['#attributes']['class'][] = 'hyx-form';
    $form['fields']['EMAIL']['#attributes']['placeholder'] = t('Votre email');
    $form['submit']['#icon'] = '<span class="hyx-icon-envelope"></span>';
    $form['submit']['#icon_position'] = 'after';
    $form['submit']['#newsletter'] = true;
    $form['submit']['#value'] = t('S\'inscrire');
  }

  if((strpos($form_id, 'commerce_cart_add_to_cart_form_') === 0)) {
    $form['submit']['#hide_text'] = false;
    $form['submit']['#icon'] = '<span class="hyx-icon-basket"></span>';
    $form['submit']['#cart'] = true;
  }
}

function hyx_button($variables) {
  $element = $variables['element'];

  // Allow button text to be appear hidden.
  // @see https://www.drupal.org/node/2327437
  $text = !empty($element['#hide_text']) ? '<span class="element-invisible">' . $element['#value'] . '</span>' : $element['#value'];

  // Add icons before or after the value.
  // @see https://www.drupal.org/node/2219965
  if (!empty($element['#icon'])) {
    if ($element['#icon_position'] === 'before') {
      $text = $element['#icon'] . ' ' . $text;
    }
    elseif ($element['#icon_position'] === 'after') {
      $text .= ' ' . $element['#icon'];
    }
  }

  if(isset($element['#cart'])) {
    unset($element['#attributes']['class']);
    $element['#attributes']['class'] = array('btn', 'hyx-button', 'cover-bt-add', 'form-submit');
    $element['#attributes']['data-type'] = t('Add to cart');
  }

  if(isset($element['#newsletter'])) {
    unset($element['#attributes']['class']);
    $element['#attributes']['class'] = array('btn', 'hyx-newsletter-submit', 'form-submit');
  }

  // This line break adds inherent margin between multiple buttons.
  return '<button' . drupal_attributes($element['#attributes']) . '>' . $text . "</button>\n";
}

function hyx_preprocess_panels_pane(&$variables) {
  $variables['title_attributes_array']['class'][] = 'hyx-cap';
}

function hyx_block_view_alter(&$data, $block) {
  if($block->module == 'facetapi') {
    unset($data['content']['field_thematique']['#attributes']['class']);
    $data['content']['field_thematique']['#attributes']['class'][] = 'hyx-bold hyx-cap list-unstyled';

    unset($data['content']['field_collection']['#attributes']['class']);
    $data['content']['field_collection']['#attributes']['class'][] = 'hyx-bold hyx-cap list-unstyled';

    unset($data['content']['field_langue']['#attributes']['class']);
    $data['content']['field_langue']['#attributes']['class'][] = 'hyx-bold hyx-cap list-unstyled';

    unset($data['content']['field_tags']['#attributes']['class']);
    $data['content']['field_tags']['#attributes']['class'][] = 'hyx-bold hyx-cap list-unstyled';

    unset($data['content']['type']['#attributes']['class']);
    $data['content']['type']['#attributes']['class'][] = 'hyx-bold hyx-cap list-unstyled';
  }
}

function hyx_pager($variables) {
  $output = "";
  $items = array();
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];

  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;
  // First is the first page listed by this pager piece (re quantity).
  $pager_first = $pager_current - $pager_middle + 1;
  // Last is the last page listed by this pager piece (re quantity).
  $pager_last = $pager_current + $quantity - $pager_middle;
  // Max is the maximum page number.
  $pager_max = $pager_total[$element];

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }

  // End of generation loop preparation.
  $li_first = theme('pager_first', array(
    'text' => (isset($tags[0]) ? $tags[0] : t('first')),
    'element' => $element,
    'parameters' => $parameters,
  ));
  $li_previous = theme('pager_previous', array(
    'text' => (isset($tags[1]) ? $tags[1] : t('previous')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
    'attributes' => array('class' => array('btn', 'hyx-button')),
    'type' => 'previous'
  ));
  $li_next = theme('pager_next', array(
    'text' => (isset($tags[3]) ? $tags[3] : t('next')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
    'attributes' => array('class' => array('btn', 'hyx-button')),
    'type' => 'next'
  ));
  $li_last = theme('pager_last', array(
    'text' => (isset($tags[4]) ? $tags[4] : t('last')),
    'element' => $element,
    'parameters' => $parameters,
  ));
  if ($pager_total[$element] > 1) {

    // Only show "first" link if set on components' theme setting
    if ($li_first && bootstrap_setting('pager_first_and_last')) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('prev'),
        'data' => $li_previous,
      );
    }
    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis', 'disabled'),
          'data' => '<span>…</span>',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            // 'class' => array('pager-item'),
            'data' => theme('pager_previous', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($pager_current - $i),
              'parameters' => $parameters,
            )),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            // Add the active class.
            'class' => array('active'),
            'data' => '<a href="#">'.$i.'</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'data' => theme('pager_next', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($i - $pager_current),
              'parameters' => $parameters,
            )),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis', 'disabled'),
          'data' => '<span>…</span>',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('next'),
        'data' => $li_next,
      );
    }
    // // Only show "last" link if set on components' theme setting
    if ($li_last && bootstrap_setting('pager_first_and_last')) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }

    $build = array(
      '#theme_wrappers' => array('container__pager'),
      '#attributes' => array(
        'class' => array(
          'text-center',
        ),
      ),
      'pager' => array(
        '#theme' => 'item_list',
        '#items' => $items,
        '#attributes' => array(
          'class' => array('hyx-pagination'),
        ),
      ),
    );
    return drupal_render($build);
  }
  return $output;
}

function hyx_pager_last($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_page_array, $pager_total;
  $output = '';
  $attributes = array();
  if(isset($variables['attributes'])){
    $attributes = $variables['attributes'];
  }
  $type = '';
  if(isset($variables['type'])) {
    $type = $variables['type'];
  }

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $output = theme('pager_link', array('text' => $text, 'page_new' => pager_load_array($pager_total[$element] - 1, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
  }

  return $output;
}

function hyx_pager_next($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array, $pager_total;
  $output = '';
  $attributes = array();
  if(isset($variables['attributes'])){
    $attributes = $variables['attributes'];
  }
  $type = '';
  if(isset($variables['type'])) {
    $type = $variables['type'];
  }

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $page_new = pager_load_array($pager_page_array[$element] + $interval, $element, $pager_page_array);
    // If the next page is the last page, mark the link as such.
    if ($page_new[$element] == ($pager_total[$element] - 1)) {
      $output = theme('pager_last', array('text' => $text, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
    }
    // The next page is not the last page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
    }
  }

  return $output;
}

function hyx_pager_first($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '';
  $attributes = array();
  if(isset($variables['attributes'])){
    $attributes = $variables['attributes'];
  }
  $type = '';
  if(isset($variables['type'])) {
    $type = $variables['type'];
  }

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $output = theme('pager_link', array('text' => $text, 'page_new' => pager_load_array(0, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
  }

  return $output;
}

function hyx_pager_previous($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '';
  $attributes = array();
  if(isset($variables['attributes'])){
    $attributes = $variables['attributes'];
  }
  $type = '';
  if(isset($variables['type'])) {
    $type = $variables['type'];
  }

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $page_new = pager_load_array($pager_page_array[$element] - $interval, $element, $pager_page_array);

    // If the previous page is the first page, mark the link as such.
    if ($page_new[$element] == 0) {
      $output = theme('pager_first', array('text' => $text, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
    }
    // The previous page is not the first page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters, 'attributes' => $attributes, 'type' => $type));
    }
  }

  return $output;
}

function hyx_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];
  $type = '';
  if(isset($variables['type'])) {
    $type = $variables['type'];
  }

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('« first') => t('Go to first page'),
        t('‹ previous') => t('Go to previous page'),
        t('next ›') => t('Go to next page'),
        t('last »') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }

  // @todo l() cannot be used here, since it adds an 'active' class based on the
  //   path only (which is always the current path for pager links). Apparently,
  //   none of the pager links is active at any time - but it should still be
  //   possible to use l() here.
  // @see http://drupal.org/node/1410574
  $attributes['href'] = url($_GET['q'], array('query' => $query));
  if($type == 'next') {
    return '<a' . drupal_attributes($attributes) . '><span class="hyx-icon-forward"></a>';
  } elseif($type == 'previous') {
    return '<a' . drupal_attributes($attributes) . '><span class="hyx-icon-backward"></span></a>';
  } else {
    return '<a' . drupal_attributes($attributes) . '>' . check_plain($text) . '</a>';
  }

}