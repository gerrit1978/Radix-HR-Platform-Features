<?php
/**
 * @file
 * radix_hr_applicant.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radix_hr_applicant_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radix_hr_applicant_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function radix_hr_applicant_flag_default_flags() {
  $flags = array();
  // Exported flag: "Job Bookmarks".
  $flags['job_bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Job Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'job',
    ),
    'flag_short' => 'Bookmark Job',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark Job',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'radix_hr_applicant',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_profile2_type().
 */
function radix_hr_applicant_default_profile2_type() {
  $items = array();
  $items['cv'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "cv",
    "label" : "CV",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function radix_hr_applicant_default_rules_link() {
  $items = array();
  $items['cv_set_hidden'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Hide CV",
      "link_type" : "confirm",
      "bundles" : { "cv" : "cv" },
      "entity_link" : 0,
      "confirm_question" : "Are you sure you want to hide your CV?",
      "confirm_description" : "Hiding your resume will exclude you from searches and being contacted by companies. You can always re-activate your resume. "
    },
    "name" : "cv_set_hidden",
    "label" : "CV set hidden",
    "path" : "cv_set_hidden",
    "entity_type" : "profile2",
    "rdf_mapping" : []
  }');
  $items['cv_set_visible'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Toon CV",
      "link_type" : "token",
      "bundles" : { "cv" : "cv" },
      "entity_link" : 1
    },
    "name" : "cv_set_visible",
    "label" : "CV set visible",
    "path" : "cv_set_visible",
    "entity_type" : "profile2",
    "rdf_mapping" : []
  }');
  return $items;
}
