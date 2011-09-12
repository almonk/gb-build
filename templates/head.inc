<? include('./_functions.php')?>
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
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/app.js"></script>
    
    <link type="text/css" media="all" rel="stylesheet" href="<?=$config->urls->templates?>/stylesheets/site.css" />
    <link type="text/css" media="print" rel="stylesheet" href="<?=$config->urls->templates?>/stylesheets/print.css" />

    <title><?=$page->title?> &mdash; Grace Blue</title>
    <!--[if lt IE 7]>
      <script src="http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js"></script>
    <![endif]-->

  </head>
  
  <body>
    <div class="container header">
      <div class="row">
        <div class="column grid_3 logo">
          <a href="<?=$config->urls->root?>?home=true"> 
            <img src="<?=$pages->get('/')->logo1->url?>"/>
          </a>
        </div>

        <div class="column grid_9 no_mobile">
          <ul class="nav">
            <?php
            $homepage = $pages->get("/"); 
            $children = $homepage->children;
            $children->prepend($homepage);

            foreach($children as $child) {              
              $class = $child === $page->rootParent ? " class='current'" : '';
              
              if ($child->title == 'Home') {// Make a different rule for the homepage
                echo "<li><a$class href='{$child->url}?home=true'>{$child->title}</a></li>";//Add ?home=true 
              }else{
                echo "<li><a$class href='{$child->url}'>{$child->title}</a></li>";
              }
            }              
            ?>
          </ul>
        </div>

        <div class="mobile_nav no_desktop">
          <select>
            <?php
            $homepage = $pages->get("/"); 
            $children = $homepage->children;
            $children->prepend($homepage); 

            foreach($children as $child) {
              $class = $child === $page->rootParent ? "selected" : '';

              if ($child->title == 'Home') {// Make a different rule for the homepage
                echo "<option value='{$child->url}?home=true'{$class}>{$child->title}</option>";
              }else{
                echo "<option value='{$child->url}'{$class}>{$child->title}</option>";  
              }
            }?> 
          </select>
          <br/>
          <div class="mobile_toolbar">
            <a href="tel:<?=$pages->get('/')->phone?>:" id="call">Call us</a>
            <a href="http://maps.google.co.uk?q=<?=$pages->get('/')->address?>" id="map">View map</a>
          </div>
        </div>
        
      </div>
    </div><!-- End header -->
