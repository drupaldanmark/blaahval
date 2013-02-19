<?php
/**
 * @file
 * blaa_articles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function blaa_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:nyheder
  $menu_links['main-menu:nyheder'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nyheder');


  return $menu_links;
}
