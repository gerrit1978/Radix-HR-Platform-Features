<?php
/**
 * @file
 * radix_hr_applicant.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radix_hr_applicant_default_rules_configuration() {
  $items = array();
  $items['rules_register_as_applicant'] = entity_import('rules_config', '{ "rules_register_as_applicant" : {
      "LABEL" : "Register as applicant",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "site:current-page:path" ], "value" : "user\\/register" } }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "115362423" : "115362423" } }
          }
        }
      ]
    }
  }');
  $items['rules_resume_initialization'] = entity_import('rules_config', '{ "rules_resume_initialization" : {
      "LABEL" : "Resume initialization",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [], "user_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "30037204" : "30037204", "115362423" : "115362423" } },
            "operation" : "OR"
          }
        },
        { "data_is_empty" : { "data" : [ "account:profile-cv" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "profile2", "param_type" : "cv", "param_user" : [ "account" ] },
            "PROVIDE" : { "entity_created" : { "resume" : "Resume" } }
          }
        },
        { "entity_save" : { "data" : [ "resume" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
