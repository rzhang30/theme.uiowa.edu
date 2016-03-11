<?php
global $base_url;
/**
 * Create FAQ page if set to show the answer in a new page.
 *
 * @param array &$variables
 *   Array reference of arguments given to the theme() function.
 */
function template_preprocess_uiowa_events_full_listing(&$variables) {
  $data = $variables['data'];
  $date = $variables['date'];
  drupal_set_title($variables['title']);

  $variables['nav'] = theme('uiowa_events_full_listing_date_nav',
    array(
      'date' => $date,
    )
  );


  $external_link = FALSE;
  if(variable_get('uiowa_events_event_link') == 'event-link-external') $external_link = TRUE;

  $items = Array();
  $items['events'] = array(
    '#attributes' => array('class' => array('uiowa-events')),
    '#type' => 'container',
  );

  foreach ($data as $e) {
    $items['events'][] = theme('uiowa_events_teaser',
      array(
        'event' => $e,
        'external_link' => $external_link,
      )
    );
  }

  $variables['list'] = drupal_render($items);;
}

function theme_uiowa_events_full_listing_date_nav($variables){
  $nav = Array();
  $page_date = $variables['date'];

  $nav['pagination'] = array(
    '#prefix' => '<ul class="pagination">',
    '#markup' => '  <li>
                      <a href="'.$base_url.'/events/'.date('Y-m-d', strtotime("-1 days", strtotime($page_date))).'" aria-label="Previous">
                        <span aria-hidden="true">&laquo;</span>
                      </a>
                    </li>
                    <li class="active">
                        <a href="#">'.date('l, F j',strtotime($page_date)).'</a>
                    </li>
                    <li>
                      <a href="'.$base_url.'/events/'.date('Y-m-d', strtotime("+1 days", strtotime($page_date))).'" aria-label="Next">
                        <span aria-hidden="true">&raquo;</span>
                      </a>
                    </li>',
    '#suffix' => '</ul>'
  );

  $output = drupal_render($nav);
  return $output;
}

function theme_uiowa_events_teaser($variables){
  $external_link = $variables['external_link'];
  $event = Array();

  $event['container'] = array(
    '#attributes' => array('class' => array('uiowa-event')),
    '#type' => 'container',
  );
  $event['container']['image'] = array(
    '#theme' => 'imagecache_external',
    '#path' => $variables['event']['photo'],
    '#style_name' => 'medium',
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
