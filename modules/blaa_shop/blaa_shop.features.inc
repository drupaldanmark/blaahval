<?php
/**
 * @file
 * blaa_shop.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blaa_shop_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
