<?php
/**
 * @file
 * blaa_articles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blaa_articles_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_1' => array(
      'name' => 'Forums',
      'machine_name' => 'vocabulary_1',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'forum',
      'weight' => '-10',
    ),
    'vocabulary_3' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_3',
      'description' => 'Tags er dine egne nøgleord - skrevet på en liste.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_7' => array(
      'name' => 'Landsdel',
      'machine_name' => 'vocabulary_7',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_8' => array(
      'name' => 'links',
      'machine_name' => 'vocabulary_8',
      'description' => 'tjaaa :)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
