<? include ('./head.inc') ?>
<div class="container page">
  <div class="row">
    <div class="sidebar column grid_3">
      <ul>
        <? include('./_team_list.inc') ?>
      </ul>
    </div>

    <div class="column grid_6">
      <h2 class="name"><?=$page->title?></h2>
      <h4><?=$page->jobTitle?></h4>
      <br/><br/>
      <?=$page->body ?>
    </div>

    <div class="column grid_3">
      <div class="pic">
        <?
        if (!$page->profilePic) {
          echo "<img src='http://placehold.it/218x310/EFEFE8/B5B8B8&text=No+image'/>";
        }else{
          echo "<img src='" . $page->profilePic->size(218,310)->url . "'>";  
        }
        ?>
      </div>

      <div id="contactInfo">
        <a href="#"><?=$page->emailAddress?></a>
        <a href="#"><?=$page->phone?></a>
      </div>
    
    </div>
  </div>
</div>
<? include ('./foot.inc') ?>
