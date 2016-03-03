<?php
/**
 * @file
 * theme_semester_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme_semester_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
