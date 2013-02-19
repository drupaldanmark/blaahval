<?php
/**
 * @file
 * blaa_theme_mobydick.box.inc
 */

/**
 * Implements hook_default_box().
 */
function blaa_theme_mobydick_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'become_member';
  $box->plugin_key = 'simple';
  $box->title = 'Bliv medlem nu';
  $box->description = 'Bliv medlem nu';
  $box->options = array(
    'body' => array(
      'value' => 'Medlemskab af Foreningen Drupal Danmark koster 100kr pr. år. 

<a href="/foreningen/bliv-medlem">Læse mere om hvordan du bliver medlem.</a>',
      'format' => '1',
    ),
  );
  $export['become_member'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-16bc37c8';
  $box->plugin_key = 'simple';
  $box->title = 'Skab DIT Drupal Danmark! ';
  $box->description = 'Box description';
  $box->options = array(
    'body' => array(
      'value' => 'Foreningen Drupal Danmark er medlemmernes forening. Hvad har du brug for som medlem? Hvad savner du? Lade os vide i forummet!',
      'format' => '3',
    ),
    'additional_classes' => 'rockstar',
  );
  $export['box-16bc37c8'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-7f748b03';
  $box->plugin_key = 'simple';
  $box->title = 'hey jo';
  $box->description = 'test';
  $box->options = array(
    'body' => array(
      'value' => 'opret forum
opret showcase
tip en nyhed',
      'format' => '1',
    ),
    'additional_classes' => 'foobar',
  );
  $export['box-7f748b03'] = $box;

  return $export;
}
