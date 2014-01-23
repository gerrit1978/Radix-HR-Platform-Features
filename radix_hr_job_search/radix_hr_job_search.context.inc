<?php
/**
 * @file
 * radix_hr_job_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function radix_hr_job_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_search';
  $context->description = 'Job search pages';
  $context->tag = 'Radix';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'jobs' => 'jobs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-jobs-page' => array(
          'module' => 'views',
          'delta' => '-exp-jobs-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'facetapi-5WeLUXLQYB6myGK1nXd721FxmefhJJtp' => array(
          'module' => 'facetapi',
          'delta' => '5WeLUXLQYB6myGK1nXd721FxmefhJJtp',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-123ZakQutnazp9Q5VV4dGfR2iZyGNkFi' => array(
          'module' => 'facetapi',
          'delta' => '123ZakQutnazp9Q5VV4dGfR2iZyGNkFi',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-qO2aQ1pOhH01tykI7iO0fVyYYhsLtVTK' => array(
          'module' => 'facetapi',
          'delta' => 'qO2aQ1pOhH01tykI7iO0fVyYYhsLtVTK',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-h2b71amScG8Sx0mG50Kyb4IAkeToqrm3' => array(
          'module' => 'facetapi',
          'delta' => 'h2b71amScG8Sx0mG50Kyb4IAkeToqrm3',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-f3NI1sU3W53tqHIWtKI29iYIETsskvpC' => array(
          'module' => 'facetapi',
          'delta' => 'f3NI1sU3W53tqHIWtKI29iYIETsskvpC',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-1UuE3MfhjlTg7j1uMAK8livdLCA02Z0G' => array(
          'module' => 'facetapi',
          'delta' => '1UuE3MfhjlTg7j1uMAK8livdLCA02Z0G',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g' => array(
          'module' => 'facetapi',
          'delta' => 'v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-q29aExfsFLNQiqAOeYEx8tE6W5YyGTe9' => array(
          'module' => 'facetapi',
          'delta' => 'q29aExfsFLNQiqAOeYEx8tE6W5YyGTe9',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Job search pages');
  t('Radix');
  $export['job_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_search_front';
  $context->description = 'Frontpage blocks (job search)';
  $context->tag = 'Radix';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-jobs-page' => array(
          'module' => 'views',
          'delta' => '-exp-jobs-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-jobs_front-block' => array(
          'module' => 'views',
          'delta' => 'jobs_front-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-qO2aQ1pOhH01tykI7iO0fVyYYhsLtVTK' => array(
          'module' => 'facetapi',
          'delta' => 'qO2aQ1pOhH01tykI7iO0fVyYYhsLtVTK',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g' => array(
          'module' => 'facetapi',
          'delta' => 'v8OT33llPN3ejhlfbqjoLxQDpoQrpr2g',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage blocks (job search)');
  t('Radix');
  $export['job_search_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_search_saved_search';
  $context->description = '';
  $context->tag = 'Radix';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'jobs:page' => 'jobs:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search_api_saved_searches-job_index' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'job_index',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Radix');
  $export['job_search_saved_search'] = $context;

  return $export;
}
