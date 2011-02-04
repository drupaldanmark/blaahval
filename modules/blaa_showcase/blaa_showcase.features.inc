<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function blaa_showcase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function blaa_showcase_image_default_styles() {
  $styles = array();

  // Exported image style: blaa_showcase_full
  $styles['blaa_showcase_full'] = array(
    'name' => 'blaa_showcase_full',
    'effects' => array(
      '1' => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '920',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: blaa_showcase_thumbnail
  $styles['blaa_showcase_thumbnail'] = array(
    'name' => 'blaa_showcase_thumbnail',
    'effects' => array(
      '2' => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
      '3' => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '220',
          'height' => '138',
          'anchor' => 'center-top',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
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

/**
 * Implementation of hook_views_api().
 */
function blaa_showcase_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
