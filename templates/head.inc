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
  </head>
  
  <body>
    <div class="container header">
      <div class="row">
        <div class="column grid_3 logo">
          <a href="<?=$config->urls->root?>?home=true"> 
            <img src="<?=$config->urls->templates?>/images/logo.png"/>
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
        </div>
        
      </div>
    </div><!-- End header -->
