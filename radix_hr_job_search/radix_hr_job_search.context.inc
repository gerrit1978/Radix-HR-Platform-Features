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
  $context->description = '';
  $context->tag = 'Radix';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'job_search' => 'job_search',
        'job_search:page' => 'job_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-tN10kti144KLCcw03L0ewIXMxTo5IyBh' => array(
          'module' => 'facetapi',
          'delta' => 'tN10kti144KLCcw03L0ewIXMxTo5IyBh',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-4GKaND4xpB5zUldsx0iUDMVovMRtsyZK' => array(
          'module' => 'facetapi',
          'delta' => '4GKaND4xpB5zUldsx0iUDMVovMRtsyZK',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-2Lezpjkdu8MvY780ORH2mClWwZzFsWDG' => array(
          'module' => 'facetapi',
          'delta' => '2Lezpjkdu8MvY780ORH2mClWwZzFsWDG',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-Fi1jKc7F29oiwt1zvoK3HBIS1iW281Y2' => array(
          'module' => 'facetapi',
          'delta' => 'Fi1jKc7F29oiwt1zvoK3HBIS1iW281Y2',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-Gkdn8Cu65TS1owVDH6qrT0FtgqSW0XaR' => array(
          'module' => 'facetapi',
          'delta' => 'Gkdn8Cu65TS1owVDH6qrT0FtgqSW0XaR',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-sGpeZuinapm7b9UWY9ufJ2E2XzQP9VGV' => array(
          'module' => 'facetapi',
          'delta' => 'sGpeZuinapm7b9UWY9ufJ2E2XzQP9VGV',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-nR98vyEVfqsXFpteRO9eORYAh6l8ZprW' => array(
          'module' => 'facetapi',
          'delta' => 'nR98vyEVfqsXFpteRO9eORYAh6l8ZprW',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-j0pH9G6NBElZYwirpxtd5m8pJQ4Oooca' => array(
          'module' => 'facetapi',
          'delta' => 'j0pH9G6NBElZYwirpxtd5m8pJQ4Oooca',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Radix');
  $export['job_search'] = $context;

  return $export;
}
