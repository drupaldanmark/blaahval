<?php
/**
 * @file
 * blaa_showcase.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blaa_showcase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blaa_showcase_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function blaa_showcase_image_default_styles() {
  $styles = array();

  // Exported image style: mobydick-showcase-full
  $styles['mobydick-showcase-full'] = array(
    'name' => 'mobydick-showcase-full',
    'effects' => array(
      15 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '960',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: mobydick-showcase-large
  $styles['mobydick-showcase-large'] = array(
    'name' => 'mobydick-showcase-large',
    'effects' => array(
      14 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '720',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: mobydick-showcase-medium
  $styles['mobydick-showcase-medium'] = array(
    'name' => 'mobydick-showcase-medium',
    'effects' => array(
      13 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '600',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '-10',
      ),
      12 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '210',
          'height' => '140',
          'anchor' => 'left-top',
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function blaa_showcase_node_info() {
  $items = array(
    'showcase' => array(
      'name' => t('Showcase'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
