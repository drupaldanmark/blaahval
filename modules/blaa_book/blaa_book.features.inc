<?php
/**
 * @file
 * blaa_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blaa_book_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function blaa_book_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Bogside'),
      'base' => 'node_content',
      'description' => t('A <em>book page</em> is a page of content, organized into a collection of related entries collectively known as a <em>book</em>. A <em>book page</em> automatically displays links to adjacent pages, providing a simple navigation system for organizing and reviewing structured content.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
