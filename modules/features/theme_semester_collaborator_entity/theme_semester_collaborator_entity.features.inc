<?php
/**
 * @file
 * theme_semester_collaborator_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme_semester_collaborator_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function theme_semester_collaborator_entity_node_info() {
  $items = array(
    'collaborator' => array(
      'name' => t('Collaborator'),
      'base' => 'node_content',
      'description' => t('Use <em>collaborator</em> for a person or organization that contributes to theme semester.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
