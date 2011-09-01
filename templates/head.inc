<? include('./_functions.php')?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame -->
    <meta content="IE=edge,chrome=1" http-equiv="X-UA-Compatible">
    
    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.6.2/jquery.min.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/scripts.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/font.js"></script>
    <script type="text/javascript" src="<?=$config->urls->templates?>/javascripts/app.js"></script>
    <link type="text/css" media="screen" rel="stylesheet" href="<?=$config->urls->templates?>/stylesheets/site.css" />

    <title><?=$page->title?> &mdash; Grace Blue</title>
  </head>
  
  <body>
    <div class="container header">
      <div class="row">
        <div class="column grid_3 logo">
          <a href="<?=$config->urls->root?>"> 
            <img src="<?=$config->urls->templates?>/images/logo.png"/>
          </a>
        </div>

        <div class="column grid_9">
          <ul class="nav">
            <?php
            $homepage = $pages->get("/"); 
            $children = $homepage->children;
            $children->prepend($homepage); 

            foreach($children as $child) {
              $class = $child === $page->rootParent ? " class='current'" : '';
              echo "<li><a$class href='{$child->url}'>{$child->title}</a></li>";
            }?>
          </ul>
        </div>
      </div>
    </div><!-- End header -->
    
