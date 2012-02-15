<?php
/**
 * @file
 * blaa_showcase.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function blaa_showcase_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'blaa_showcase';
  $view->description = 'View med showcases i gitter';
  $view->tag = 'blaa_showcase';
  $view->base_table = 'node';
  $view->human_name = 'Drupal site showcase';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Bygget på Drupal';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'shadow';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = FALSE;
  $handler->display->display_options['header']['text']['content'] = 'Her er et udpluk af sites lavet i Drupal, som vi kender til.';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/showcase">Tilføj ny showcase</a>';
  /* Felt: Images */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_showcase_images';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_showcase_images';
  $handler->display->display_options['fields']['entity_id_1']['ui_name'] = 'Images';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_1']['settings'] = array(
    'image_style' => 'mobydick-showcase-medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['entity_id_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['field_api_classes'] = 0;
  /* Felt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Titel';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Indhold: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'showcase_category' => 'showcase_category',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'showcase' => 'showcase',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    160 => '160',
  );
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Kategori';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'showcase_category';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Side (Danske) */
  $handler = $view->new_display('page', 'Side (Danske)', 'page_dk');
  $handler->display->display_options['path'] = 'showcase/dk';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Danske sites';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Showcase';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'primary-links';

  /* Display: Side (Internationale) */
  $handler = $view->new_display('page', 'Side (Internationale)', 'page_int');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'showcase' => 'showcase',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    161 => '161',
  );
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Kategori';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'showcase_category';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'showcase/worldwide';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Udenlandske sites';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['block_description'] = 'Drupal Sites';
  $translatables['blaa_showcase'] = array(
    t('Defaults'),
    t('Bygget på Drupal'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér på'),
    t('Asc'),
    t('Desc'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Her er et udpluk af sites lavet i Drupal, som vi kender til.'),
    t('<a href="/node/add/showcase">Tilføj ny showcase</a>'),
    t('Alle'),
    t('Kategori'),
    t('Side (Danske)'),
    t('Side (Internationale)'),
    t('Blok'),
    t('Drupal Sites'),
  );
  $export['blaa_showcase'] = $view;

  return $export;
}
