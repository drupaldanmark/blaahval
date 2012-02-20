<?php
/**
 * @file
 * blaa_articles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function blaa_articles_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'artikler';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Artikler';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'half';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: image */
  $handler->display->display_options['fields']['field_article_image']['id'] = 'field_article_image';
  $handler->display->display_options['fields']['field_article_image']['table'] = 'field_data_field_article_image';
  $handler->display->display_options['fields']['field_article_image']['field'] = 'field_article_image';
  $handler->display->display_options['fields']['field_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_article_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_image']['settings'] = array(
    'image_style' => 'mobydick-showcase-medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_article_image']['field_api_classes'] = 0;
  /* Felt: Indhold: teaser */
  $handler->display->display_options['fields']['field_article_teaser']['id'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['table'] = 'field_data_field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['field'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_article_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_teaser']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'field_dato_medium';
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
    'artikel' => 'artikel',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'shadow';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'nyheder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nyheder';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: teaser */
  $handler->display->display_options['fields']['field_article_teaser']['id'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['table'] = 'field_data_field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['field'] = 'field_article_teaser';
  $handler->display->display_options['fields']['field_article_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_article_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_article_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_teaser']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_teaser']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_article_teaser']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_article_teaser']['field_api_classes'] = 0;

  /* Display: Blok top */
  $handler = $view->new_display('block', 'Blok top', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'half';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'nyheder top';
  $translatables['artikler'] = array(
    t('Master'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér på'),
    t('Asc'),
    t('Desc'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
    t('Block'),
    t('Blok top'),
    t('nyheder top'),
  );
  $export['artikler'] = $view;

  return $export;
}
