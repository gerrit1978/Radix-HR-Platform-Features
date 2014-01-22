<?php
/**
 * @file
 * radix_hr_job_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radix_hr_job_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'job_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_jobs_index';
  $view->human_name = 'Job Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Indexed Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_jobs_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Aanmaakdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_search_jobs_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_job_workflow_state']['id'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['table'] = 'search_api_index_search_jobs_index';
  $handler->display->display_options['filters']['field_job_workflow_state']['field'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['value'] = array(
    'published' => 'published',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'jobs';
  $translatables['job_search'] = array(
    t('Master'),
    t('Jobs'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Page'),
  );
  $export['job_search'] = $view;

  return $export;
}
