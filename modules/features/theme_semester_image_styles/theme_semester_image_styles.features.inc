<?php
/**
 * @file
 * theme_semester_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function theme_semester_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: event_thumbnail.
  $styles['event_thumbnail'] = array(
    'label' => 'Event Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
