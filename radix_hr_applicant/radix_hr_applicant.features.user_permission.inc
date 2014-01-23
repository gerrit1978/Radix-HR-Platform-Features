<?php
/**
 * @file
 * radix_hr_applicant.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radix_hr_applicant_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own cv profile'.
  $permissions['edit own cv profile'] = array(
    'name' => 'edit own cv profile',
    'roles' => array(
      'applicant' => 'applicant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cv profile'.
  $permissions['view own cv profile'] = array(
    'name' => 'view own cv profile',
    'roles' => array(
      'applicant' => 'applicant',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
