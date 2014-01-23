<?php
/**
 * @file
 * radix_hr_applicant.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radix_hr_applicant_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  return $export;
}
