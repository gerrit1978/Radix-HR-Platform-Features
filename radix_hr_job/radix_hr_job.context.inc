<?php
/**
 * @file
 * radix_hr_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function radix_hr_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_detail_page';
  $context->description = 'Add blocks to job detail page';
  $context->tag = 'Radix';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'job' => 'job',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'radix_hr_job-radix_hr_job_linkedin' => array(
          'module' => 'radix_hr_job',
          'delta' => 'radix_hr_job_linkedin',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add blocks to job detail page');
  t('Radix');
  $export['job_detail_page'] = $context;

  return $export;
}
