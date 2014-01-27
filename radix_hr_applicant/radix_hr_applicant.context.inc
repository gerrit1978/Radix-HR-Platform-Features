<?php
/**
 * @file
 * radix_hr_applicant.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function radix_hr_applicant_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'applicant_cv';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'profile-cv' => 'profile-cv',
        'profile-cv/*' => 'profile-cv/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'radix_hr_applicant-cv_state_info' => array(
          'module' => 'radix_hr_applicant',
          'delta' => 'cv_state_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['applicant_cv'] = $context;

  return $export;
}
