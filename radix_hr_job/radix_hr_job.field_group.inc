<?php
/**
 * @file
 * radix_hr_job.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function radix_hr_job_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_description|node|job|form';
  $field_group->group_name = 'group_job_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beschrijving',
    'weight' => '3',
    'children' => array(
      0 => 'field_job_call_to_action',
      1 => 'field_job_company_description',
      2 => 'field_job_description',
      3 => 'field_job_offer',
      4 => 'field_job_profile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_description|node|job|form'] = $field_group;

  return $export;
}
