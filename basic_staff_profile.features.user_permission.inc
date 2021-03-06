<?php
/**
 * @file
 * basic_staff_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_staff_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create staff_profile content'.
  $permissions['create staff_profile content'] = array(
    'name' => 'create staff_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff_profile content'.
  $permissions['delete any staff_profile content'] = array(
    'name' => 'delete any staff_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff_profile content'.
  $permissions['delete own staff_profile content'] = array(
    'name' => 'delete own staff_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any staff_profile content'.
  $permissions['edit any staff_profile content'] = array(
    'name' => 'edit any staff_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff_profile content'.
  $permissions['edit own staff_profile content'] = array(
    'name' => 'edit own staff_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
