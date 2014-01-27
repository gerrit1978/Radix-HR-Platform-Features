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
  $items['rules_link_condition_cv_init_visible'] = entity_import('rules_config', '{ "rules_link_condition_cv_init_visible" : {
      "LABEL" : "Rules link: CV init visible condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "radix_hr_applicant" ],
      "USES VARIABLES" : { "profile2" : { "label" : "profile2", "type" : "profile2" } },
      "AND" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } },
        { "data_is" : { "data" : [ "site:current-user" ], "value" : [ "profile2:user" ] } },
        { "radix_hr_applicant_cv_complete" : { "profile" : [ "profile2" ] } }
      ]
    }
  }');
  $items['rules_link_condition_cv_set_hidden'] = entity_import('rules_config', '{ "rules_link_condition_cv_set_hidden" : {
      "LABEL" : "Rules link: CV set hidden condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "profile2" : { "label" : "profile2", "type" : "profile2" } },
      "AND" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } },
        { "data_is" : { "data" : [ "profile2:field-cv-state" ], "value" : "visible" } },
        { "OR" : [
            { "data_is" : { "data" : [ "profile2:user" ], "value" : [ "site:current-user" ] } },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "30037204" : "30037204" } }
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_cv_set_visible'] = entity_import('rules_config', '{ "rules_link_condition_cv_set_visible" : {
      "LABEL" : "Rules link: CV set visible condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "profile2" : { "label" : "profile2", "type" : "profile2" } },
      "AND" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } },
        { "OR" : [
            { "data_is" : { "data" : [ "profile2:field-cv-state" ], "value" : "hidden" } },
            { "data_is" : { "data" : [ "profile2:field-cv-state" ], "value" : "auto_hidden" } }
          ]
        },
        { "OR" : [
            { "data_is" : { "data" : [ "profile2:user" ], "value" : [ "site:current-user" ] } },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "30037204" : "30037204" } }
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_link_set_cv_init_visible'] = entity_import('rules_config', '{ "rules_link_set_cv_init_visible" : {
      "LABEL" : "Rules link: CV init visible rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "profile2" : { "type" : "profile2", "label" : "profile2" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } } ],
            "DO" : [
              { "redirect" : { "url" : "profile-cv" } },
              { "data_set" : { "data" : [ "profile2:field-cv-state" ], "value" : "visible" } }
            ],
            "LABEL" : "CV init visible"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_cv_set_hidden'] = entity_import('rules_config', '{ "rules_link_set_cv_set_hidden" : {
      "LABEL" : "Rules link: CV set hidden rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "profile2" : { "label" : "profile2", "type" : "profile2" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } } ],
            "DO" : [
              { "drupal_message" : { "message" : "Your CV has been hidden." } },
              { "data_set" : { "data" : [ "profile2:field-cv-state" ], "value" : "hidden" } },
              { "redirect" : { "url" : "profile-cv" } }
            ],
            "LABEL" : "CV set hidden"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_cv_set_visible'] = entity_import('rules_config', '{ "rules_link_set_cv_set_visible" : {
      "LABEL" : "Rules link: CV set visible rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "profile2" : { "type" : "profile2", "label" : "profile2" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } } ],
            "DO" : [
              { "data_set" : { "data" : [ "profile2:field-cv-state" ], "value" : "visible" } },
              { "drupal_message" : { "message" : "Your CV is active now." } }
            ],
            "LABEL" : "CV set visible"
          }
        }
      ]
    }
  }');
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
  $items['rules_resume_label'] = entity_import('rules_config', '{ "rules_resume_label" : {
      "LABEL" : "Resume label",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-cv-job-preferences" ] } },
        { "NOT data_is" : {
            "data" : [ "profile2:label" ],
            "value" : [ "profile2:field-cv-job-preferences:field-cv-pref-desired-job-title" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "profile2:label" ],
            "value" : [ "profile2:field-cv-job-preferences:field-cv-pref-desired-job-title" ]
          }
        }
      ]
    }
  }');
  return $items;
}
