<?php
/**
 * @file
 * Theme functions
 */

// Include all files from the includes directory.
$includes_path = dirname(__FILE__) . '/includes/*.inc';
foreach (glob($includes_path) as $filename) {
  require_once dirname(__FILE__) . '/includes/' . basename($filename);
}

/**
 * Implements template_preprocess_page().
 */
function theme_semester_preprocess_page(&$variables) {
  // Add copyright to theme.
  if ($copyright = theme_get_setting('copyright')) {
    $variables['copyright'] = check_markup($copyright['value'], $copyright['format']);
  }
}

/**
 * Implements template_preprocess_page().
 */
function theme_semester_uiowa_events_teaser($variables){
  global $base_url;
  $external_link = $variables['external_link'];
  $event = Array();

  $event['container'] = array(
    '#attributes' => array('class' => array('uiowa-event')),
    '#type' => 'container',
  );
  $event['container']['image'] = array(
    '#theme' => 'imagecache_external',
    '#path' => $variables['event']['photo'],
    '#style_name' => 'event_thumbnail',
    '#alt' => $variables['event']['title'],
  );

  $title_link = '';
  if($external_link) $title_link = '<h3><a href="http://events.uiowa.edu/event/'.$variables['event']['id'].'">'.$variables['event']['title'].'</a></h3>';
  else $title_link = '<h3><a href="'.$base_url.'/event/'.$variables['event']['id'].'">'.$variables['event']['title'].'</a></h3>';
  $event['container']['title'] = array(
    '#markup' => $title_link,
  );

  $date_string = '';
  if($variables['event']['all_day']){
    $date_string = date('n/j/Y',strtotime($variables['event']['start']));
  }
  else{
    $date_string = date('n/j/Y - g:i a',strtotime($variables['event']['start']));
    if(isset($e['end'])){
      $date_string .= ' to '.date('g:i a',strtotime($variables['event']['end']));
    }
  }

  $event['container']['time'] = array(
    '#markup' => '<p>'.$date_string.'</p>',
  );
  return $event;

}
