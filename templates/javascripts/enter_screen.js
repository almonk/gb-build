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
  if ($(window).height() < 720 ) {
    resizeCrest();
  }else{
    restoreFullCrest();
  }
});

$(window).load(function() {
  centerEnterScreen();
  
  if ($.browser.webkit) {
    $('#enter_crest').animate({
     opacity: '1',
     translateY:'+30',
     rotateX: '+=0.10'
   },2100);    

   $('#logo').delay(900).animate({
     opacity: '1',
     translateX:'+=10'
   },800);    

   $('h2').delay(990).animate({
     opacity: '1'
   },800);    
  }

   if ($.browser.msie) {
    $('.enter_crest').css({top: '0px'})
   };
   
});

function centerEnterScreen(){
  $('.container').css({
   position:'absolute',
   top: ($(window).height() - $('.container').height())/2,
   left: ($(window).width() - $('.container').outerWidth())/2
  });
}

function resizeCrest(){
  $('#enter_crest').height($(window).height());
  $('.enter #right').css('marginTop', ($(window).height() / 2) - 60  );
}

function restoreFullCrest(){
  $('#enter_crest').height(718);
  $('.enter #right').css('marginTop', '300px');
}
