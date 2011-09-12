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
  
  if ($.browser.webkit) {
    $('#enter_crest').animate({
     opacity: '1',
     translateY:'+=30'
   },1500);    

   $('#logo').delay(600).animate({
     opacity: '1',
     translateX:'+=10'
   },800);    

   $('h2').delay(720).animate({
     opacity: '1'
   },800);    
  }

  
});

function centerEnterScreen(){
  $('.container').css({
   position:'absolute',
   top: ($(window).height() - $('.container').height())/2,
   left: ($(window).width() - $('.container').outerWidth())/2
  });
	
}
