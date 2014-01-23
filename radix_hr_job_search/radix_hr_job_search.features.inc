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
  $items['job_index'] = entity_import('search_api_index', '{
    "name" : "Job index",
    "machine_name" : "job_index",
    "description" : null,
    "server" : "db_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "url" : { "type" : "uri" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "field_job_workflow_state" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "field_job_degree_level:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
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
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_job_apply_email" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_job_apply_email" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_job_apply_email" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_job_apply_email" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
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
 * Implements hook_default_search_api_saved_searches_settings().
 */
function radix_hr_job_search_default_search_api_saved_searches_settings() {
  $items = array();
  $items['job_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "job_index",
    "index_id" : "job_index",
    "enabled" : "1",
    "options" : {
      "date_field" : "changed",
      "description" : "",
      "registered_choose_mail" : 0,
      "choose_name" : 1,
      "registered_user_delete_key" : 1,
      "show_empty_list" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 1,
      "interval_options" : { "86400" : "Dagelijks", "604800" : "Wekelijks" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 1,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function radix_hr_job_search_default_search_api_server() {
  $items = array();
  $items['db_server'] = entity_import('search_api_server', '{
    "name" : "DB server",
    "machine_name" : "db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : {
        "job_index" : {
          "type" : {
            "table" : "search_api_db_job_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_job_index_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_job_index_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_job_index_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_job_index_changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_job_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_url" : {
            "table" : "search_api_db_job_index_search_api_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_job_degree_level:parents_all" : {
            "table" : "search_api_db_job_index_field_job_degree_level_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_employment_type:parents_all" : {
            "table" : "search_api_db_job_index_field_job_employment_type_parents_all",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_experience:parents_all" : {
            "table" : "search_api_db_job_index_field_job_experience_parents_all",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_job_field_of_study:parents_all" : {
            "table" : "search_api_db_job_index_field_job_field_of_study_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_field_of_work:parents_all" : {
            "table" : "search_api_db_job_index_field_job_field_of_work_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_languages:parents_all" : {
            "table" : "search_api_db_job_index_field_job_languages_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_general:parents_all" : {
            "table" : "search_api_db_job_index_field_job_skills_general_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_skills_it:parents_all" : {
            "table" : "search_api_db_job_index_field_job_skills_it_parents_all",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_job_workflow_state" : {
            "table" : "search_api_db_job_index_field_job_workflow_state",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "cv_index" : {
          "search_api_language" : {
            "table" : "search_api_db_cv_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_cv_index_search_api_viewed",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cv_job_preferences:field_cv_pref_career_status" : {
            "table" : "search_api_db_cv_index_field_cv_job_preferences_field_cv_pref_",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_cv_job_preferences:field_cv_pref_field_of_work" : {
            "table" : "search_api_db_cv_index_field_cv_job_preferences_field_cv_pre_1",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_cv_work_experience:field_cv_pref_field_of_work" : {
            "table" : "search_api_db_cv_index_field_cv_work_experience_field_cv_pref_",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_cv_work_experience:field_cv_workxp_company_name" : {
            "table" : "search_api_db_cv_index_field_cv_work_experience_field_cv_workx",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_cv_education:field_cv_edu_field_of_study:parents_all" : {
            "table" : "search_api_db_cv_index_field_cv_education_field_cv_edu_field_o",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_cv_languages:field_cv_languages_language:term" : {
            "table" : "search_api_db_cv_index_field_cv_languages_field_cv_languages_l",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_cv_general_skills:field_cv_gen_skills_skills_level:term:parents_all" : {
            "table" : "search_api_db_cv_index_field_cv_general_skills_field_cv_gen_sk",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_cv_it_skills:field_cv_it_skills_skills_level:term:parents_all" : {
            "table" : "search_api_db_cv_index_field_cv_it_skills_field_cv_it_skills_s",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_cv_state" : {
            "table" : "search_api_db_cv_index",
            "column" : "field_cv_state",
            "type" : "string",
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
