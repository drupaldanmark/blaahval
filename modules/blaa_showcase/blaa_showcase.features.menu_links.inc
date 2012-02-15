<?php
/**
 * @file
 * blaa_showcase.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function blaa_showcase_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:showcase
  $menu_links['main-menu:showcase'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'showcase',
    'router_path' => 'showcase',
    'link_title' => 'Showcase',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Showcase');


  return $menu_links;
}
