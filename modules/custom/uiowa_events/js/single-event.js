(function($) {
	Drupal.singleEvent = function() {
    $('span.future-instances-toggle').click(function() {
      $('div.future-instances').slideToggle();
    });
  }
    Drupal.behaviors.singleEvent = {
    attach: function(context, settings) {
      $('.future-instances-toggle', context).once('singleEvent', function() {
        Drupal.singleEvent();
      });
    }
  };
})(jQuery);
