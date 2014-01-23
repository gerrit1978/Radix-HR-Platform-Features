<?php
/**
 * @file
 * radix_hr_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radix_hr_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any cv profile'.
  $permissions['edit any cv profile'] = array(
    'name' => 'edit any cv profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cv profile'.
  $permissions['edit own cv profile'] = array(
    'name' => 'edit own cv profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any cv profile'.
  $permissions['view any cv profile'] = array(
    'name' => 'view any cv profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cv profile'.
  $permissions['view own cv profile'] = array(
    'name' => 'view own cv profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
