Cufon.replace('h1', { fontFamily: 'Baskerville' });
Cufon.replace('h2', { fontFamily: 'ITC New Baskerville Std' });
Cufon.replace('h2.page_title', { fontFamily: 'Baskerville' });
Cufon.replace('h2.name', { fontFamily: 'Baskerville' });
Cufon.replace('ul.nav a', { fontFamily: 'ITC New Baskerville Std' });

Cufon.CSS.ready(function() { 
	redraw();
});

$(document).ready(function() {
	redraw();
  
  $('.mobile_nav select').change(function() {
    window.location = $(this).val();
  });

  $('.person').biggerlink();
  $('.page_list li').biggerlink();
});

$(window).resize(function() {
	redraw();
});

$(window).load(function() {
	redraw();
});

function redraw(){
	var welcome_box_left = $(document).width(); 
	draw_width = ((welcome_box_left - 940)/2)+10;
	
	var welcome_box_height = $('.welcome_box').height();
	
	$('.draw').width(draw_width);
	$('.draw').height(welcome_box_height);
}


