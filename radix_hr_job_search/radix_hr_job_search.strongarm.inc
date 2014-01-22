<?php
/**
 * @file
 * radix_hr_job_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radix_hr_job_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@search_jobs_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@search_jobs_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@search_jobs_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@search_jobs_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@search_jobs_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_search_api@search_jobs_index_options'] = $strongarm;

  return $export;
}
