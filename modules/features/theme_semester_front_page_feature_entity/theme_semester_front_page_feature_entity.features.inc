<?php
/**
 * @file
 * theme_semester_front_page_feature_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme_semester_front_page_feature_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function theme_semester_front_page_feature_entity_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function theme_semester_front_page_feature_entity_node_info() {
  $items = array(
    'front_page_feature_entity' => array(
      'name' => t('Front Page Feature Entity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
