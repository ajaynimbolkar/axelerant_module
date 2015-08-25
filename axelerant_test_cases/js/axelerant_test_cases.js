/**
 * @file axelerant.js
 * Used for collapse the block after 10sec .
 */

(function($) {
Drupal.behaviors.axelerant_test_cases = {
  attach: function (context, settings) {
    // Code for hiding std block content after 10 sec.
     $('#block-axelerant-test-cases-last-login-time .content').delay(10000).fadeOut('slow');
     $('#block-axelerant-test-cases-last-login-time').addClass('active')
    // Code for showing block content when user click on block.
    $( "#block-axelerant-test-cases-last-login-time" ).click(function() {
      if ($( "#block-axelerant-test-cases-last-login-time" ).hasClass('active')) {
        $( "#block-axelerant-test-cases-last-login-time" ).removeClass('active')
        $('#block-axelerant-test-cases-last-login-time .content').fadeIn('slow');
      }
    });

    // Code for hiding pane block content after 10 sec.
     $('.pane-axelerant-test-cases-block .pane-content').delay(10000).fadeOut('slow');
     $('.pane-axelerant-test-cases-block').addClass('active')
    // Code for showing block content when user click on block.
    $( ".pane-axelerant-test-cases-block" ).click(function() {
      if ($( ".pane-axelerant-test-cases-block" ).hasClass('active')) {
        $( ".pane-axelerant-test-cases-block" ).removeClass('active')
        $('.pane-axelerant-test-cases-block .pane-content').fadeIn('slow');
      }
    });
  }
};
})(jQuery);
