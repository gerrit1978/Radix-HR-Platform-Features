<?php
/**
 * @file
 * radix_hr_applicant.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function radix_hr_applicant_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_cv_attachments-field_cv_attachment_file'
  $field_instances['field_collection_item-field_cv_attachments-field_cv_attachment_file'] = array(
    'bundle' => 'field_cv_attachments',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_attachment_file',
    'label' => 'Bijlagen',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'cv/attachments',
      'file_extensions' => 'txt pdf doc jpg jpeg png gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_education-field_cv_edu_degree_level'
  $field_instances['field_collection_item-field_cv_education-field_cv_edu_degree_level'] = array(
    'bundle' => 'field_cv_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_edu_degree_level',
    'label' => 'Opleidingsniveau',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_education-field_cv_edu_field_of_study'
  $field_instances['field_collection_item-field_cv_education-field_cv_edu_field_of_study'] = array(
    'bundle' => 'field_cv_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_edu_field_of_study',
    'label' => 'Studiedomein',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_education-field_cv_edu_institute'
  $field_instances['field_collection_item-field_cv_education-field_cv_edu_institute'] = array(
    'bundle' => 'field_cv_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_edu_institute',
    'label' => 'Instituut Naam',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_education-field_cv_edu_time_period'
  $field_instances['field_collection_item-field_cv_education-field_cv_edu_time_period'] = array(
    'bundle' => 'field_cv_education',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_edu_time_period',
    'label' => 'Periode',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'within',
        'text_parts' => array(),
        'year_range' => '-50:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_education-field_cv_summary'
  $field_instances['field_collection_item-field_cv_education-field_cv_summary'] = array(
    'bundle' => 'field_cv_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_general_skills-field_cv_gen_skills_skills_level'
  $field_instances['field_collection_item-field_cv_general_skills-field_cv_gen_skills_skills_level'] = array(
    'bundle' => 'field_cv_general_skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'term_level',
        'settings' => array(),
        'type' => 'term_level_group',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_gen_skills_skills_level',
    'label' => 'Algemene Vaardigheden',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_level',
      'settings' => array(
        'tag_cloud' => 1,
        'term_entries_limit_per_group' => 3,
        'validate_empty_terms' => 0,
      ),
      'type' => 'term_level_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_general_skills-field_cv_summary'
  $field_instances['field_collection_item-field_cv_general_skills-field_cv_summary'] = array(
    'bundle' => 'field_cv_general_skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_it_skills-field_cv_it_skills_skills_level'
  $field_instances['field_collection_item-field_cv_it_skills-field_cv_it_skills_skills_level'] = array(
    'bundle' => 'field_cv_it_skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'term_level',
        'settings' => array(),
        'type' => 'term_level_group',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_it_skills_skills_level',
    'label' => 'IT Vaardigheden',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_level',
      'settings' => array(
        'tag_cloud' => 1,
        'term_entries_limit_per_group' => 3,
        'validate_empty_terms' => 0,
      ),
      'type' => 'term_level_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_it_skills-field_cv_summary'
  $field_instances['field_collection_item-field_cv_it_skills-field_cv_summary'] = array(
    'bundle' => 'field_cv_it_skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Additional Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_available'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_available'] = array(
    'bundle' => 'field_cv_job_preferences',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_available',
    'label' => 'Beschikbaar vanaf',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'within',
        'text_parts' => array(),
        'year_range' => '-0:+7',
      ),
      'type' => 'date_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_career_status'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_career_status'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_career_status',
    'label' => 'Carrière Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_desired_job_title'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_desired_job_title'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_desired_job_title',
    'label' => 'Gewenste Functietitel',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_desired_salary'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_desired_salary'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_desired_salary',
    'label' => 'Gewenst Salaris',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' gross annual income',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_employment_type'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_employment_type'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_employment_type',
    'label' => 'Contract Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_pref_field_of_work'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_pref_field_of_work'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pref_field_of_work',
    'label' => 'Gewenst werkveld',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_job_preferences-field_cv_summary'
  $field_instances['field_collection_item-field_cv_job_preferences-field_cv_summary'] = array(
    'bundle' => 'field_cv_job_preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_languages-field_cv_languages_language'
  $field_instances['field_collection_item-field_cv_languages-field_cv_languages_language'] = array(
    'bundle' => 'field_cv_languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'term_level',
        'settings' => array(),
        'type' => 'term_level_group',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_languages_language',
    'label' => 'Talen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_level',
      'settings' => array(
        'tag_cloud' => 1,
        'term_entries_limit_per_group' => 3,
        'validate_empty_terms' => 0,
      ),
      'type' => 'term_level_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_languages-field_cv_summary'
  $field_instances['field_collection_item-field_cv_languages-field_cv_summary'] = array(
    'bundle' => 'field_cv_languages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_birthday'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_birthday'] = array(
    'bundle' => 'field_cv_personal_information',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_birthday',
    'label' => 'Geboortedatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-70:+0',
      ),
      'type' => 'date_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_firstname'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_firstname'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_firstname',
    'label' => 'Voornaam',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_lastname'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_lastname'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_lastname',
    'label' => 'Familienaam',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_phone'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_phone'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_phone',
    'label' => 'Telefoon',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_photo'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_photo'] = array(
    'bundle' => 'field_cv_personal_information',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_photo',
    'label' => 'Foto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'cv/photo',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_postal_address'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_postal_address'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => array(
      0 => array(
        'element_key' => 'field_collection_item|field_cv_personal_information|field_cv_pers_postal_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'country' => 'BE',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_postal_address',
    'label' => 'Adres',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_pers_salutation'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_pers_salutation'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_pers_salutation',
    'label' => 'Aanspreking',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_personal_information-field_cv_summary'
  $field_instances['field_collection_item-field_cv_personal_information-field_cv_summary'] = array(
    'bundle' => 'field_cv_personal_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Over Mezelf',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_summary'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_summary'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_summary',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_company_link'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_company_link'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_company_link',
    'label' => 'Bedrijfswebsite',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_company_location'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_company_location'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_company_location',
    'label' => 'Bedrijfslocatie',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_company_name'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_company_name'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_company_name',
    'label' => 'Bedrijfsnaam',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_employment_type'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_employment_type'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_employment_type',
    'label' => 'Contract Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_field_of_work'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_field_of_work'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_field_of_work',
    'label' => 'Werkveld',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_job_title'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_job_title'] = array(
    'bundle' => 'field_cv_work_experience',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_job_title',
    'label' => 'Functietitel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_cv_work_experience-field_cv_workxp_time_period'
  $field_instances['field_collection_item-field_cv_work_experience-field_cv_workxp_time_period'] = array(
    'bundle' => 'field_cv_work_experience',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cv_workxp_time_period',
    'label' => 'Periode',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'within',
        'text_parts' => array(),
        'year_range' => '-40:+0',
      ),
      'type' => 'date_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_attachments'
  $field_instances['profile2-cv-field_cv_attachments'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_attachments',
    'label' => 'Bijlagen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_education'
  $field_instances['profile2-cv-field_cv_education'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_education',
    'label' => 'Opleiding',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_general_skills'
  $field_instances['profile2-cv-field_cv_general_skills'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_general_skills',
    'label' => 'Algemene Vaardigheden',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_it_skills'
  $field_instances['profile2-cv-field_cv_it_skills'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_it_skills',
    'label' => 'IT Vaardigheden',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_job_preferences'
  $field_instances['profile2-cv-field_cv_job_preferences'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_job_preferences',
    'label' => 'Job Voorkeuren',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_languages'
  $field_instances['profile2-cv-field_cv_languages'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_languages',
    'label' => 'Talen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_personal_information'
  $field_instances['profile2-cv-field_cv_personal_information'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_personal_information',
    'label' => 'Persoonlijke Informatie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_state'
  $field_instances['profile2-cv-field_cv_state'] = array(
    'bundle' => 'cv',
    'default_value' => array(
      0 => array(
        'value' => 'incomplete',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_state',
    'label' => 'CV status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-cv-field_cv_work_experience'
  $field_instances['profile2-cv-field_cv_work_experience'] = array(
    'bundle' => 'cv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Toevoegen',
          'delete' => 'Verwijderen',
          'description' => TRUE,
          'edit' => 'Bewerken',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cv_work_experience',
    'label' => 'Werkervaring',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aanspreking');
  t('Additional Notes');
  t('Adres');
  t('Algemene Vaardigheden');
  t('Bedrijfslocatie');
  t('Bedrijfsnaam');
  t('Bedrijfswebsite');
  t('Beschikbaar vanaf');
  t('Bijlagen');
  t('CV status');
  t('Carrière Status');
  t('Contract Type');
  t('Familienaam');
  t('Foto');
  t('Functietitel');
  t('Geboortedatum');
  t('Gewenst Salaris');
  t('Gewenst werkveld');
  t('Gewenste Functietitel');
  t('IT Vaardigheden');
  t('Instituut Naam');
  t('Job Voorkeuren');
  t('Opleiding');
  t('Opleidingsniveau');
  t('Opmerkingen');
  t('Over Mezelf');
  t('Periode');
  t('Persoonlijke Informatie');
  t('Studiedomein');
  t('Talen');
  t('Telefoon');
  t('Voornaam');
  t('Werkervaring');
  t('Werkveld');

  return $field_instances;
}
