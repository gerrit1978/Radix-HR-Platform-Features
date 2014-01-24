<?php
/**
 * @file
 * radix_hr_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radix_hr_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function radix_hr_application_default_message_type() {
  $items = array();
  $items['job_application_recruiter'] = entity_import('message_type', '{
    "name" : "job_application_recruiter",
    "description" : "Job application",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "nl",
    "arguments" : null,
    "message_text" : {
      "nl" : [
        {
          "value" : "\\u003Cp\\u003ENew application: [message:field-job-application:url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003ENew application: [message:field-job-application:url]\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "\\u003Cp\\u003E[message:field_applicant_resume_link] has sent you a new application [message:field_application_link].\\u003C\\/p\\u003E",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field_applicant_resume_link] has sent you a new application [message:field_application_link].\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function radix_hr_application_node_info() {
  $items = array(
    'application' => array(
      'name' => t('Sollicitatie'),
      'base' => 'node_content',
      'description' => t('Een sollicitatie.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
