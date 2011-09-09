<?
// This is the file for the enter screen shown before the website
?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame -->
    <meta content="IE=edge,chrome=1" http-equiv="X-UA-Compatible">
    <meta name="description" content="<?=$page->summary?>">
    <meta name="HandheldFriendly" content="True">
    <meta name="MobileOptimized" content="320"/>
    <meta name="viewport" content="width=device-width, initial-scale=1.0, user-scalable=true">
    
    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.6.2/jquery.min.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/scripts.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/font.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/enter_screen.js"></script>
    
    <link type="text/css" media="all" rel="stylesheet" href="<?=$config->urls->templates?>/stylesheets/site.css" />
    <link type="text/css" media="print" rel="stylesheet" href="<?=$config->urls->templates?>/stylesheets/print.css" />
    <title><?=$pages->get('/enter')->title?> &mdash; Grace Blue</title>
  </head>
  
  <body class="enter">
    <div class="container">
      <div class="row" id="enter_screen">
        <div class="column grid_6 enter_crest">
          <img id="enter_crest" src="<?=$pages->get('/')->crest2->url?>"/>
        </div>
         
        <div class="row" id="right">
          <div class="column grid_2 spacer">
           <img src="<?=$pages->get('/')->logo2->url?>"/> 
          </div>
        
          <div class="column grid_4 page spacer">
            <h2><a href="<?=$config->urls->root?>?home=true"><?=$pages->get('/enter')->headline?></a></h2>
          </div>        
        </div>
        
      </div>
    </div>
    
  </body>
</html>
