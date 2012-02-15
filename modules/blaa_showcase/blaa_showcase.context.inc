<?php
/**
 * @file
 * blaa_showcase.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blaa_showcase_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'showcase_list';
  $context->description = 'Context for viewing the showcase list.';
  $context->tag = 'blaa_showcase';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blaa_showcase' => 'blaa_showcase',
        'blaa_showcase:page_dk' => 'blaa_showcase:page_dk',
        'blaa_showcase:page_int' => 'blaa_showcase:page_int',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'showcase',
    'theme_html' => array(
      'class' => 'onecolumn',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for viewing the showcase list.');
  t('blaa_showcase');
  $export['showcase_list'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'showcase_view';
  $context->description = 'Context for when viewing a single showcase.';
  $context->tag = 'blaa_showcase';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'showcase' => 'showcase',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'showcase',
    'menu' => 'showcase',
    'theme_html' => array(
      'class' => 'onecolumn',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for when viewing a single showcase.');
  t('blaa_showcase');
  $export['showcase_view'] = $context;

  return $export;
}
