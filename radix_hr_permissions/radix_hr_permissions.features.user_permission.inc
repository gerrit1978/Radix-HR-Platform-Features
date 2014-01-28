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

  // Exported permission: 'access rules link cv_init_visible'.
  $permissions['access rules link cv_init_visible'] = array(
    'name' => 'access rules link cv_init_visible',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link cv_set_hidden'.
  $permissions['access rules link cv_set_hidden'] = array(
    'name' => 'access rules link cv_set_hidden',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link cv_set_visible'.
  $permissions['access rules link cv_set_visible'] = array(
    'name' => 'access rules link cv_set_visible',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link job_publish'.
  $permissions['access rules link job_publish'] = array(
    'name' => 'access rules link job_publish',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link job_unpublish'.
  $permissions['access rules link job_unpublish'] = array(
    'name' => 'access rules link job_unpublish',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'rules_link',
  );

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

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cv profile'.
  $permissions['edit any cv profile'] = array(
    'name' => 'edit any cv profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own cv profile'.
  $permissions['edit own cv profile'] = array(
    'name' => 'edit own cv profile',
    'roles' => array(
      'applicant' => 'applicant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag job_bookmarks'.
  $permissions['flag job_bookmarks'] = array(
    'name' => 'flag job_bookmarks',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag job_bookmarks'.
  $permissions['unflag job_bookmarks'] = array(
    'name' => 'unflag job_bookmarks',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'view any cv profile'.
  $permissions['view any cv profile'] = array(
    'name' => 'view any cv profile',
    'roles' => array(),
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
