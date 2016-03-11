<?php

/**
 * @file
 * Template file for the full listing of events.
 */

 /**
 * Available variables:
 *
 * $title
 *   Sets the page title
 * $data
 *   Event data generated from Localist API.
 */
?>
<div id="uiowa-event">
  <div id="main-column">
    <div class="event-time">
      <?php if (!empty($data['future_instances'])): ?>
        <?php print $data['today'] ?> → <span class="future-instances-toggle">more dates through <?php print date('l, F j',strtotime($data['last_date'])) ?></span>
        <div class="future-instances">
          <?php print $data['future_instances'] ?>
        </div>
      <?php else: ?>
        <?php print $data['today'] ?>
      <?php endif; ?>
    </div>
    <?php if (!empty($data['location_name'])): ?>
      <div class="event-location"><?php print $data['location_name'] ?><?php if (!empty($data['room_number'])): ?><?php print ', '.$data['room_number'] ?>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($data['address'])): ?>
      <div class="event-address">
        <?php print $data['address'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($data['description'])): ?>
      <div class="event-description">
        <?php print $data['description'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($data['custom_fields']['contact_name'])): ?>
      <div class="contact-info">
        Contact Info: <?php print $data['custom_fields']['contact_name'] ?><?php if (!empty($data['custom_fields']['contact_email'])): ?>, <?php print $data['custom_fields']['contact_email'] ?><?php if (!empty($data['custom_fields']['contact_phone_number'])): ?>, <?php print $data['custom_fields']['contact_phone_number'] ?>
        <?php endif; ?><?php endif; ?>
      </div>
    <?php endif; ?>
  </div>
  <div id="secondary-column">
    <?php
      print theme('imagecache_external', array(
        'path' => $data['photo_url'],
        'style_name'=> 'medium',
        'alt' => 'Druplicon',
      ));
    ?>
    <a href="http://events.uiowa.edu/event/<?php print $data['id'] ?>" role="button" class="btn btn-primary active">View on Event Calendar</a>
  </div>
</div>
