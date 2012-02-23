<?php
/**
 * @file
 * blaa_theme_mobydick.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blaa_theme_mobydick_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-teaser-block' => array(
          'module' => 'views',
          'delta' => 'teaser-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'boxes-box-16bc37c8' => array(
          'module' => 'boxes',
          'delta' => 'box-16bc37c8',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-blaa_showcase-block_1' => array(
          'module' => 'views',
          'delta' => 'blaa_showcase-block_1',
          'region' => 'fourth_1column',
          'weight' => '0',
        ),
        'views-blaa_events-block' => array(
          'module' => 'views',
          'delta' => 'blaa_events-block',
          'region' => 'fourth_2column',
          'weight' => '-10',
        ),
        'views-artikler-block' => array(
          'module' => 'views',
          'delta' => 'artikler-block',
          'region' => 'fourth_3column',
          'weight' => '0',
        ),
        'comment-recent' => array(
          'module' => 'comment',
          'delta' => 'recent',
          'region' => 'fourth_4column',
          'weight' => '0',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'section-title ',
      'subtitle' => 'section',
    ),
    'theme_html' => array(
      'class' => 'section-class',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['front'] = $context;

  return $export;
}
