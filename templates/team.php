<? include ('./head.inc') ?>
<div class="container page">
  <div class="row">
    <div class="sidebar column grid_3">
      <ul>
        <? include('./_team_list.inc') ?>
      </ul>
    </div>

    <div class="column grid_9">
      <h2 class="page_title"><?=$page->headline?></h2>
      <?=$page->body?>

      <div class="row">
        <?
        $people = $pages->get("/our-team"); 
        $children = $people->children;

        foreach($children as $child) { ?>
          <div class="person">
            <div class="pic">
              <a href="<?=$child->url?>">
                <?
                if (!$child->profilePic) {
                  echo "<img src='http://placehold.it/137x202/EFEFE8/B5B8B8&text=No+image'/>";
                }else{
                  echo "<img src='" . $child->profilePic->size(137,202)->url . "'>"; 
                }
                ?>
              </a>
            </div>
            <div class="text">
              <h3><?=$child->title?></h3>
              <h4><?=$child->jobTitle?></h4>
              <? $page->setOutputFormatting(false) ?>
              <p><?=neat_trim($child->body,110)?></p> 
              <? $page->setOutputFormatting(true) ?>
            </div>
          </div><!-- End person -->
        <? }; ?>
      </div><!-- End row -->
    </div>
    </div>
    </div>


<? include ('./foot.inc') ?>
