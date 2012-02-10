<?php
/**
 * @file
 * blaa_articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blaa_articles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function blaa_articles_node_info() {
  $items = array(
    'artikel' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Artikler er simple nodes som bliver vist på forsiden.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
