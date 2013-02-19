<?php
/**
 * @file
 * blaa_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blaa_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nyheder';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'artikel' => 'artikel',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'artikler' => 'artikler',
        'artikler:page' => 'artikler:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blaa_showcase-block_1' => array(
          'module' => 'views',
          'delta' => 'blaa_showcase-block_1',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'nyheder',
    'menu' => 'nyheder',
  );
  $context->condition_mode = 0;
  $export['nyheder'] = $context;

  return $export;
}
