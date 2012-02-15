<?php
/**
 * @file
 * blaa_showcase.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function blaa_showcase_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');


  return $menus;
}
