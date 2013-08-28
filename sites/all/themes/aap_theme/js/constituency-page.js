(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.redirect_to_donate_page = {
			attach: function(context) { 
				$(".shs-hierarchy li:nth-child(1)").addClass("state");
				$(".shs-hierarchy li:nth-child(2)").addClass("district");
				$(".shs-hierarchy li:nth-child(3)").addClass("constituency");
				if ( $('.aap-delhi-region.container-1 .field__item').children().length > 0 ) {
					 $('.aap-delhi-region.container-1 .field__item').addClass("aap-delhi-region-content");
				}
				if ( $('.aap-delhi-region.container-2 .field__item').children().length > 0 ) {
					 $('.aap-delhi-region.container-2 .field__item').addClass("aap-delhi-region-content");
				}
			}
	}	

}
)(jQuery, Drupal, this, this.document); 