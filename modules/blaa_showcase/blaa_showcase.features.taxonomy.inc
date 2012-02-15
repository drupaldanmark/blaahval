<?php
/**
 * @file
 * blaa_showcase.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blaa_showcase_taxonomy_default_vocabularies() {
  return array(
    'showcase_category' => array(
      'name' => 'Showcase category',
      'machine_name' => 'showcase_category',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
