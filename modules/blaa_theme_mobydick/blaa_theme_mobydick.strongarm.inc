<?php
/**
 * @file
 * blaa_theme_mobydick.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function blaa_theme_mobydick_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'mobydick';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mobydick_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 1,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 1,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_contextual' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 1,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 1,
    'mothership_css_freeform' => '',
    'mothership_css_default' => 0,
    'mothership_css_layout' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 0,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 1,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 0,
    'mothership_classes_body_path' => 1,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 1,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 0,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 0,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 1,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 1,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 1,
    'mothership_classes_field_type' => 1,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 1,
    'mothership_classes_form_container_widget' => 1,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 0,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 1,
    'mothership_classes_form_placeholder_link' => 'http://website.dk',
    'mothership_classes_form_placeholder_email' => 'dries@drupal.org',
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 0,
    'mothership_classes_view_view_id' => 1,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 1,
    'mothership_classes_state' => 1,
    'mothership_viewport' => 1,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 1,
  );
  $export['theme_mobydick_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'files/favicon.ico',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_auto';
  $strongarm->value = 0;
  $export['thickbox_auto'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_derivative';
  $strongarm->value = 'original';
  $export['thickbox_derivative'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_imagecache_preset';
  $strongarm->value = '0';
  $export['thickbox_imagecache_preset'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_imagefield_gallery';
  $strongarm->value = '0';
  $export['thickbox_imagefield_gallery'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_login';
  $strongarm->value = 1;
  $export['thickbox_login'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'thickbox_pages';
  $strongarm->value = 'admin*
img_assist*
node/add/*
node/*/edit';
  $export['thickbox_pages'] = $strongarm;

  return $export;
}
