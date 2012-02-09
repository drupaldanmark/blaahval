<?php
/**
 * @file
 * blaa_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blaa_tags_taxonomy_default_vocabularies() {
  return array(
    'blaa_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'blaa_tags',
      'description' => 'Tags er dine egne nøgleord - skrevet på en liste.',
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
