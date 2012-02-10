<?php
/**
 * @file
 * blaa_members.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function blaa_members_user_default_roles() {
  $roles = array();

  // Exported role: medlem 2009
  $roles['medlem 2009'] = array(
    'name' => 'medlem 2009',
    'weight' => '0',
  );

  // Exported role: medlem 2010
  $roles['medlem 2010'] = array(
    'name' => 'medlem 2010',
    'weight' => '0',
  );

  // Exported role: medlem 2011
  $roles['medlem 2011'] = array(
    'name' => 'medlem 2011',
    'weight' => '0',
  );

  // Exported role: medlem 2012
  $roles['medlem 2012'] = array(
    'name' => 'medlem 2012',
    'weight' => '1',
  );

  return $roles;
}
