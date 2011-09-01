<? include ('./head.inc') ?>
  <div class="container page">
    <div class="draw"></div>
    <div class="row">
      <div class="column grid_6 welcome_box">
        <div class="padding">
          <h1><?=$page->headline?></h1>
          <?=$page->body?> 
        </div>
      </div>
    
      <div class="column grid_6">
        <ul class="page_list">
          <?php
          $homepage = $pages->get("/"); 
          $children = $homepage->children;
          $children->prepend($homepage); 

          foreach($children as $child) {
            echo "<li><h2><a href='{$child->url}'>{$child->title}</a></h2><p>{$child->summary}</p></li>";
          }?>
        </ul>
      </div>  

    </div>
  </div>
<? include ('./foot.inc') ?>

