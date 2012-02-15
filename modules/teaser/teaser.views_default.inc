<?php
/**
 * @file
 * teaser.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function teaser_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'slides_container';
  $handler->display->display_options['style_options']['wrapper_class'] = 'slides';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Felt: Indhold: node ref */
  $handler->display->display_options['fields']['field_teaser_noderef']['id'] = 'field_teaser_noderef';
  $handler->display->display_options['fields']['field_teaser_noderef']['table'] = 'field_data_field_teaser_noderef';
  $handler->display->display_options['fields']['field_teaser_noderef']['field'] = 'field_teaser_noderef';
  $handler->display->display_options['fields']['field_teaser_noderef']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_noderef']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_noderef']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_teaser_noderef']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_teaser_noderef']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser_noderef']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_teaser_noderef']['settings'] = array(
    'alias' => 0,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_teaser_noderef']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_teaser_noderef] ';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['path'] = 'node/[field_teaser_noderef]';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_teaser_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'mobydick-teaser',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_teaser_image']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teaser' => 'teaser',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['teaser'] = array(
    t('Master'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér på'),
    t('Asc'),
    t('Desc'),
    t('node/[field_teaser_noderef] '),
    t('node/[field_teaser_noderef]'),
    t('Block'),
  );
  $export['teaser'] = $view;

  return $export;
}
