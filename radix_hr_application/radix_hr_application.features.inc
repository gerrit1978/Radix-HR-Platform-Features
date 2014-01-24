<?php
/**
 * @file
 * radix_hr_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radix_hr_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function radix_hr_application_node_info() {
  $items = array(
    'application' => array(
      'name' => t('Sollicitatie'),
      'base' => 'node_content',
      'description' => t('Een sollicitatie, hetzij ingevoerd door de kandidaat, hetzij als een koppeling tussen een kandidaat in de database (als auteur) en een job uit de database.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
