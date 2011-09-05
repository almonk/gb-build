<div class="container footer no_mobile">
      <div class="row">
        <div class="column grid_6">
          <?=$pages->get('/')->address?>
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
  </body>
</html>
