<?php
/**
 * @file
 * blaa_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blaa_calendar_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_5' => array(
      'name' => 'Events',
      'machine_name' => 'vocabulary_5',
      'description' => 'Kategorisering af forskellige former for events.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_6' => array(
      'name' => 'Meetup-sted',
      'machine_name' => 'vocabulary_6',
      'description' => 'Vælg hvor meetup\'en foregår – vælges kun for meetups',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '2',
    ),
  );
}
