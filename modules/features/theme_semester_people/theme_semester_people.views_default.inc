<?php
/**
 * @file
 * theme_semester_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function theme_semester_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people';
  $view->description = 'Collection of pages for people listing';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Planning Committee';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Theme Semester Planning Committee is made up of faculty, staff, and students from across the University of Iowa campus and community. The committee meets monthly to develop marquee events and activities related to the Theme Semester and goals, while encouraging campus and partners to become involved in theme initiatives. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_person_link']['id'] = 'field_person_link';
  $handler->display->display_options['fields']['field_person_link']['table'] = 'field_data_field_person_link';
  $handler->display->display_options['fields']['field_person_link']['field'] = 'field_person_link';
  $handler->display->display_options['fields']['field_person_link']['label'] = '';
  $handler->display->display_options['fields']['field_person_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_person_link']['type'] = 'link_absolute';
  /* Field: Content: Headshot */
  $handler->display->display_options['fields']['field_person_headshot']['id'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['table'] = 'field_data_field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['field'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_person_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Attributes */
  $handler->display->display_options['fields']['field_person_attributes']['id'] = 'field_person_attributes';
  $handler->display->display_options['fields']['field_person_attributes']['table'] = 'field_data_field_person_attributes';
  $handler->display->display_options['fields']['field_person_attributes']['field'] = 'field_person_attributes';
  $handler->display->display_options['fields']['field_person_attributes']['label'] = '';
  $handler->display->display_options['fields']['field_person_attributes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_attributes']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_person_attributes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_attributes']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Group(s) (field_person_groups) */
  $handler->display->display_options['filters']['field_person_groups_value']['id'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['table'] = 'field_data_field_person_groups';
  $handler->display->display_options['filters']['field_person_groups_value']['field'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['value'] = array(
    'planning_committee' => 'planning_committee',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/planning-committee';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Student Ambassadors';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'To come';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Group(s) (field_person_groups) */
  $handler->display->display_options['filters']['field_person_groups_value']['id'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['table'] = 'field_data_field_person_groups';
  $handler->display->display_options['filters']['field_person_groups_value']['field'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['value'] = array(
    'student_ambassador' => 'student_ambassador',
  );
  $handler->display->display_options['path'] = 'about/student-ambassadors';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advisory Board';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The Advisory Board for Theme Semester encourages and supports the exploration of the chosen topics on campus and in the community, while helping guide the planning process: ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Group(s) (field_person_groups) */
  $handler->display->display_options['filters']['field_person_groups_value']['id'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['table'] = 'field_data_field_person_groups';
  $handler->display->display_options['filters']['field_person_groups_value']['field'] = 'field_person_groups_value';
  $handler->display->display_options['filters']['field_person_groups_value']['value'] = array(
    'advisory_board' => 'advisory_board',
  );
  $handler->display->display_options['path'] = 'about/advisory-board';
  $export['people'] = $view;

  return $export;
}
