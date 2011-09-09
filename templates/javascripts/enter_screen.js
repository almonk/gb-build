Cufon.replace('h1', { fontFamily: 'Baskerville' });
Cufon.replace('h2', { fontFamily: 'ITC New Baskerville Std' });
Cufon.replace('h2.page_title', { fontFamily: 'Baskerville' });
Cufon.replace('h2.name', { fontFamily: 'Baskerville' });
Cufon.replace('ul.nav a', { fontFamily: 'ITC New Baskerville Std' });

$(document).ready(function() {
  $('html').click(function() {
    window.location = $('#right h2 a').attr('href');
  });
  centerEnterScreen();
});

function centerEnterScreen(){
  var enter_screen_height = $('#enter_screen').height();
  console.log("Enter screen height: " + enter_screen_height);
}
