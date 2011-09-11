Cufon.replace('h1', { fontFamily: 'Baskerville' });
Cufon.replace('h2', { fontFamily: 'ITC New Baskerville Std' });
Cufon.replace('h2.page_title', { fontFamily: 'Baskerville' });
Cufon.replace('h2.name', { fontFamily: 'Baskerville' });
Cufon.replace('ul.nav a', { fontFamily: 'ITC New Baskerville Std' });

$(document).ready(function() {
  $('html').click(function() {
    window.location = $('#right h2 a').attr('href');
  });
  
  $(window).resize();
});

$(window).resize(function(){
  centerEnterScreen();
});

$(window).load(function() {
  centerEnterScreen();

  $('#enter_crest').fadeTo(500, 1, function() {
    $('#logo').fadeTo(500, 1);
    $('h2').fadeTo(500, 1);
  });
  
});

function centerEnterScreen(){
  $('.container').css({
   position:'absolute',
   top: ($(window).height() - $('.container').height())/2,
   left: ($(window).width() - $('.container').outerWidth())/2
  });
	
}
