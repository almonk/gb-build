<? include ('./head.inc') ?>
  <div class="container page">    
    <div class="row">
      <div class="column grid_3 sidebar">
        <ul>
          <?
            $children = $page->rootParent->children;

            foreach($children as $child) {
              $class = $child->url === $page->url ? " class='current'" : '';
              echo "<li><a$class href='{$child->url}'>{$child->title}</a></li>";
            }
          ?>
        </ul>
      </div>
      <div class="column grid_9 text">
        <h2 class="page_title">
          <?=$page->headline?>
        </h2>
        <?=$page->body?>
      </div> 
    </div>
  </div>
<? include ('./foot.inc') ?>

