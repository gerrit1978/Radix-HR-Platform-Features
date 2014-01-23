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
  $view->name = 'jobs';
  $view->description = 'Jobs search index';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_job_index';
  $view->human_name = 'Jobs';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'jobs';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['class'] = 'job';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Indexed Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Wijzigingsdatum */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_job_workflow_state']['id'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['filters']['field_job_workflow_state']['field'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['value'] = array(
    'published' => 'published',
  );
  /* Filter criterion: Indexed Node: Inhoudstype */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'job' => 'job',
  );
  /* Filter criterion: Zoeken: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'What';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/job';
  $translatables['jobs'] = array(
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
    t('What'),
    t('Page'),
  );
  $export['jobs'] = $view;

  $view = new view();
  $view->name = 'jobs_front';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_job_index';
  $view->human_name = 'Latest Jobs Frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recente jobs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Indexed Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Aanmaakdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_job_workflow_state']['id'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['table'] = 'search_api_index_job_index';
  $handler->display->display_options['filters']['field_job_workflow_state']['field'] = 'field_job_workflow_state';
  $handler->display->display_options['filters']['field_job_workflow_state']['value'] = array(
    'published' => 'published',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['jobs_front'] = array(
    t('Master'),
    t('Recente jobs'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['jobs_front'] = $view;

  return $export;
}
