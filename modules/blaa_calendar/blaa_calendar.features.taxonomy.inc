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
    'blaa_calendar_event_location' => array(
      'name' => 'Meetup-sted',
      'machine_name' => 'blaa_calendar_event_location',
      'description' => 'Vælg hvor meetup\'en foregår – vælges kun for meetups',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '2',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'blaa_calendar_event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'blaa_calendar_event_type',
      'description' => 'Kategorisering af forskellige former for events.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
