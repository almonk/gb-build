<div class="container footer no_mobile">
      <div class="row">
        <div class="column grid_6">
          <?=$pages->get('/')->address?>
          <br/>
          <?=$pages->get('/')->phone?>
        </div>

        <div class="column grid_6">
          <ul class="footer_nav">
            <?
            foreach ($pages->get('/')->footerLinks as $child) {
              echo '<li>';
              echo '<a href="' . $child->url . '">';
              echo $child->title;
              echo '</a>';
              echo '</li>';
            }
            ?>
          </ul>
        </div>
      </div><!-- End row -->
    </div><!-- End footer -->

    <!-- Begin cufon fix -->
    <style type="text/css">h1,h2,h3,a{ visibility : visible }</style>

    <?php 

	// If the page is editable, then output a link that takes us straight to the page edit screen:
	if($page->editable()) {
		echo "<a style='background-color:black;color:white;position:absolute;right:0;top:0;font-family:arial,sans-serif;font-size:11px;font-weight:bold;padding:7px;text-decoration:none;font-weight:bold;text-transform:uppercase;' target='_blank' class='nav' id='editpage' href='{$config->urls->admin}page/edit/?id={$page->id}'>Edit</a>"; 
	}

	?>
  </body>
</html>
