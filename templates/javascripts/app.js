function redraw(){var a=$(document).width();draw_width=(a-940)/2+10;var b=$(".welcome_box").height();$(".draw").width(draw_width),$(".draw").height(b)}Cufon.replace("h1",{fontFamily:"Baskerville"}),Cufon.replace("h2",{fontFamily:"ITC New Baskerville Std"}),Cufon.replace("h2.page_title",{fontFamily:"Baskerville"}),Cufon.replace("h2.name",{fontFamily:"Baskerville"}),Cufon.replace("ul.nav a",{fontFamily:"ITC New Baskerville Std"}),Cufon.CSS.ready(function(){redraw()}),$(document).ready(function(){redraw()}),$(window).resize(function(){redraw()})