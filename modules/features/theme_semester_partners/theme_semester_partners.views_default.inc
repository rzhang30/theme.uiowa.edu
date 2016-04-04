<?php
/**
 * @file
 * theme_semester_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function theme_semester_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners';
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
  $handler->display->display_options['header']['area']['content'] = 'Each Theme Semester is composted of partners from across campus who work to generate support for sustained capacity and resources for meaningful work, exhibits, and activities connect to the theme. Thank you to all who have contributed to the current Theme Semester, including:';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_partner_website']['id'] = 'field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['table'] = 'field_data_field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['field'] = 'field_partner_website';
  $handler->display->display_options['fields']['field_partner_website']['label'] = '';
  $handler->display->display_options['fields']['field_partner_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partner_website']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_partner_website]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_partner_logo']['id'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['table'] = 'field_data_field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['field'] = 'field_partner_logo';
  $handler->display->display_options['fields']['field_partner_logo']['label'] = '';
  $handler->display->display_options['fields']['field_partner_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partner_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'partner' => 'partner',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/partners';
  $export['partners'] = $view;

  return $export;
}
