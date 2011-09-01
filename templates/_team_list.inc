<?php
  $teamPage = $pages->get("/our-team"); 
  $children = $teamPage->children;

  foreach($children as $child) {
    $class = $child->url === $page->url ? " class='current'" : '';
    echo "<li><a$class href='{$child->url}'>{$child->title}</a></li>";
  }
?>
