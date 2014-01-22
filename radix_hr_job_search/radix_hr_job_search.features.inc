<?php
/**
 * @file
 * radix_hr_job_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radix_hr_job_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radix_hr_job_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function radix_hr_job_search_default_search_api_index() {
  $items = array();
  $items['search_jobs_index'] = entity_import('search_api_index', '{
    "name" : "search_jobs_index",
    "machine_name" : "search_jobs_index",
    "description" : null,
    "server" : "search_db_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "created" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_job_workflow_state" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text" },
        "field_job_call_to_action:value" : { "type" : "text" },
        "field_job_company_description:value" : { "type" : "text" },
        "field_job_degree_level:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_job_description:value" : { "type" : "text" },
        "field_job_employment_type:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_job_experience:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_job_field_of_study:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_job_field_of_work:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_job_languages:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_job_offer:value" : { "type" : "text" },
        "field_job_profile:value" : { "type" : "text" },
        "field_job_skills_general:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_job_skills_it:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "job" : "job" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function radix_hr_job_search_default_search_api_server() {
  $items = array();
  $items['search_db_server'] = entity_import('search_api_server', '{
    "name" : "search_db_server",
    "machine_name" : "search_db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "search_jobs_index" : {
          "nid" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_jobs_index_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "language" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "language",
            "type" : "string",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_job_workflow_state" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "field_job_workflow_state",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_url" : {
            "table" : "search_api_db_search_jobs_index",
            "column" : "search_api_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_search_jobs_index_search_api_viewed",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_field_of_study:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_field_of_study_paren",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_field_of_work:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_field_of_work_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_degree_level:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_degree_level_parents",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_employment_type:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_employment_type_pare",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_experience:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_experience_parents_a",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_languages:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_languages_parents_al",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_general:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_skills_general_paren",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_it:parents_all" : {
            "table" : "search_api_db_search_jobs_index_field_job_skills_it_parents_al",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_description:value" : {
            "table" : "search_api_db_search_jobs_index_field_job_description_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_company_description:value" : {
            "table" : "search_api_db_search_jobs_index_field_job_company_description_",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_profile:value" : {
            "table" : "search_api_db_search_jobs_index_field_job_profile_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_offer:value" : {
            "table" : "search_api_db_search_jobs_index_field_job_offer_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_call_to_action:value" : {
            "table" : "search_api_db_search_jobs_index_field_job_call_to_action_value",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
