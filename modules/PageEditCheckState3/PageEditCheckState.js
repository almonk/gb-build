
$(function() {
	
	// exclude the save submit buttons from the check
	$('button[type="submit"],input[type="submit"]').addClass('noWarn');
	
	// add one time event on all form elements
   	$('input,textarea,select', 'form ul.Inputfields').one('input change',function() {
		addCheck();
    });

	// for sortables we check jquery ui sortable event sortupdate
	$('.ui-sortable').live("sortupdate", function(){
		addCheck();
	});
	
   	$('.noWarn').click(function() {
		removeCheck();
	});
	
	
	var TinyMCE_change = function(ed) {
	    if(ed.isDirty) {
	        // the data changed 
	        addCheck(); 
	    }
	};  

	// modify PW's JS config data for each TinyMCE instance
	$(".InputfieldTinyMCE textarea").each(function() {
	    config[this.id].onchange_callback = TinyMCE_change;
	});
	
	function addCheck(){
		window.onbeforeunload = function() {
			return 'Leaving this page will cause any unsaved data to be lost.';
		}
	};
	
	function removeCheck(){
		window.onbeforeunload = null;
	};
});

