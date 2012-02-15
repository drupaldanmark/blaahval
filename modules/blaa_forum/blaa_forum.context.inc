<?php
/**
 * @file
 * blaa_forum.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blaa_forum_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum-oversigt';
  $context->description = '';
  $context->tag = 'blaa forum';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'forum' => 'forum',
        'forums/*' => 'forums/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'forum',
    'theme_html' => array(
      'class' => 'onecolumn',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blaa forum');
  $export['forum-oversigt'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum-post';
  $context->description = '';
  $context->tag = 'blaa forum';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-new' => array(
          'module' => 'user',
          'delta' => 'new',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'views-events-block' => array(
          'module' => 'views',
          'delta' => 'events-block',
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'user-online' => array(
          'module' => 'user',
          'delta' => 'online',
          'region' => 'sidebar_first',
          'weight' => 2,
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => 3,
        ),
        'comment-recent' => array(
          'module' => 'comment',
          'delta' => 'recent',
          'region' => 'sidebar_first',
          'weight' => 4,
        ),
        'node-recent' => array(
          'module' => 'node',
          'delta' => 'recent',
          'region' => 'sidebar_first',
          'weight' => 5,
        ),
      ),
    ),
    'menu' => 'forum',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blaa forum');
  $export['forum-post'] = $context;

  return $export;
}
