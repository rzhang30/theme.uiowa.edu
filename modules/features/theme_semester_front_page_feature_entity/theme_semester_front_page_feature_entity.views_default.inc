<?php
/**
 * @file
 * theme_semester_front_page_feature_entity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function theme_semester_front_page_feature_entity_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['id'] = 'field_front_page_feature_link_1';
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['table'] = 'field_data_field_front_page_feature_link';
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['field'] = 'field_front_page_feature_link';
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_front_page_feature_link_1']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_front_page_feature_link_1]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_front_page_feature_link_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_front_page_feature_link']['id'] = 'field_front_page_feature_link';
  $handler->display->display_options['fields']['field_front_page_feature_link']['table'] = 'field_data_field_front_page_feature_link';
  $handler->display->display_options['fields']['field_front_page_feature_link']['field'] = 'field_front_page_feature_link';
  $handler->display->display_options['fields']['field_front_page_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_feature_link']['click_sort_column'] = 'url';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'front_page_feature_entity' => 'front_page_feature_entity',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'front_page_feature_panel');
  $export['front_page_'] = $view;

  return $export;
}
