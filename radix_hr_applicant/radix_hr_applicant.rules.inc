<?php

/**
 * @file
 * Rules integration for Radix Applicant.
 */

/**
 * Implements hook_rules_condition_info().
 */
function radix_hr_applicant_rules_condition_info() {
  return array(
    'radix_hr_applicant_cv_complete' => array(
      'label' => t('The CV is complete'),
      'group' => t('Radix Applicant'),
      'parameter' => array(
        'profile' => array(
          'label' => t('CV'),
          'description' => t('The cv that will be checked.'),
          'type' => 'profile2',
        ),
      ),
      'base' => 'radix_hr_applicant_cv_is_complete',
    ),
  );
}
