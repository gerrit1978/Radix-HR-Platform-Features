<?php
/**
 * @file
 * radix_hr_application.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radix_hr_application_default_rules_configuration() {
  $items = array();
  $items['rules_job_application_rules'] = entity_import('rules_config', '{ "rules_job_application_rules" : {
      "LABEL" : "Job application rules",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "application" : "application" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-application-job-ref" ] } },
        { "node_is_of_type" : {
            "node" : [ "node:field-application-job-ref" ],
            "type" : { "value" : { "job" : "job" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Sollicitatie is goed ontvangen!" } },
        { "mail" : {
            "to" : "[node:field-application-job-ref:author:mail], [node:field-application-job-ref:field-job-apply-email]",
            "subject" : "New application for your job [node:field-application-job-ref:title]",
            "message" : "You have received a new application for the job offering [node:field-application-job-ref:title] at [node:field-application-job-ref:url]. You can read the application under: [node:url]. \\r\\n\\r\\nIn order to see the application you need to login with your username [node:field-application-job-ref:author:name].",
            "language" : [ "" ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "job_application_recruiter",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "new_message" : "New message" } }
          }
        },
        { "data_set" : {
            "data" : [ "new-message:field-message-audience" ],
            "value" : [ "node:field-application-job-ref:author" ]
          }
        },
        { "data_set" : { "data" : [ "new-message:field-job-application" ], "value" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
