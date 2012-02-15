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
          'weight' => 0,
        ),
        'boxes-box-16bc37c8' => array(
          'module' => 'boxes',
          'delta' => 'box-16bc37c8',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-blaa_showcase-block_1' => array(
          'module' => 'views',
          'delta' => 'blaa_showcase-block_1',
          'region' => 'fourth_1column',
          'weight' => 0,
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'fourth_2column',
          'weight' => 0,
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'fourth_2column',
          'weight' => 1,
        ),
        'views-artikler-block' => array(
          'module' => 'views',
          'delta' => 'artikler-block',
          'region' => 'fourth_3column',
          'weight' => 0,
        ),
        'boxes-become_member' => array(
          'module' => 'boxes',
          'delta' => 'become_member',
          'region' => 'fourth_3column',
          'weight' => 1,
        ),
        'comment-recent' => array(
          'module' => 'comment',
          'delta' => 'recent',
          'region' => 'fourth_4column',
          'weight' => 0,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'fourth_4column',
          'weight' => 1,
        ),
        'boxes-box-7f748b03' => array(
          'module' => 'boxes',
          'delta' => 'box-7f748b03',
          'region' => 'footer_1column',
          'weight' => 0,
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_2column',
          'weight' => 0,
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'footer_3column',
          'weight' => 0,
        ),
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'footer_4column',
          'weight' => 0,
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
