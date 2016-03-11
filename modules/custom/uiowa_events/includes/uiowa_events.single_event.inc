<?php

/**
 * Create FAQ page if set to show the answer in a new page.
 *
 * @param array &$variables
 *   Array reference of arguments given to the theme() function.
 */
function template_preprocess_uiowa_events_single_event(&$variables) {
  global $base_url;
  // Setting the title
  drupal_set_title($variables['title']);

  // Generating the breadcrumb trail
  $breadcrumb = array();
  $breadcrumb[] = l('Home', '<front>');
  $breadcrumb[] = l('Events', $base_url.'/events/');
  drupal_set_breadcrumb($breadcrumb);

  //Variables used to get the event instances
  $today = date('Y-m-d');
  $current_date_string = '';
  $matched_key;

  // Finding the current or next upcoming date event instance

  foreach($variables['data']['event_instances'] as $key => $event){
    if(startsWith($event['event_instance']['start'],$today)){
      $matched_key = $key;
      $current_date_string = dateStringilizer($event['event_instance']);
    }
  }

  if(!isset($matched_key)){
    $matched_key = 0;
    $current_date_string = dateStringilizer($variables['data']['event_instances'][0]['event_instance']);
  }

  // Passing the current date string to the variables array
  $variables['data']['today'] = $current_date_string;


  // Finding up to the next 10 instances

  $future_instances = '';

  $instance_total = count($variables['data']['event_instances']);

  $more_events_count = $instance_total-$matched_key-1;
  if($more_events_count > 10){
    $i = 1;
    while($i <= 10){
      $future_instances .= '<p>'.dateStringilizer($variables['data']['event_instances'][$matched_key+$i]['event_instance']).'</p>';
      $i++;
    }
  }
  elseif ($more_events_count > 0) {
    $i = 1;
    while($i <= $more_events_count){
      $future_instances .= '<p>'.dateStringilizer($variables['data']['event_instances'][$matched_key+$i]['event_instance']).'</p>';
      $i++;
    }
  }

  $variables['data']['future_instances'] = $future_instances;

}


function dateStringilizer($event_instance){
  if($event_instance['all_day']){
    $date_string = date('l, F j',strtotime($event_instance['start']));
  }
  else{
    $date_string = date('l, F j \a\t g:i a',strtotime($event_instance['start']));
    if(!empty($event_instance['end'])){
      $date_string .= ' to '.date('g:i a',strtotime($event_instance['end']));
    }
  }
  return $date_string;
}

// Helper array function to find the current event instance
function startsWith($haystack, $needle) {
    // search backwards starting from haystack length characters from the end
    return $needle === "" || strrpos($haystack, $needle, -strlen($haystack)) !== false;
}
