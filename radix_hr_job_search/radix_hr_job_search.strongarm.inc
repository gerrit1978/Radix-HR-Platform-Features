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
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@job_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@job_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@job_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_search_api@job_index_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_saved_searches_search_ids';
  $strongarm->value = array(
    'job_index' => array(
      'search_api_views:jobs:page' => 'search_api_views:jobs:page',
    ),
  );
  $export['search_api_saved_searches_search_ids'] = $strongarm;

  return $export;
}
