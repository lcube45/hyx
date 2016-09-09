<div id="views-bootstrap-grid-<?php print $id ?>" class="<?php print $classes ?>">

    <div class="row">

      <?php $i = 1; ?>
      <?php foreach ($items as $row): ?>

        <?php foreach ($row['content'] as $column): ?>
          <div class="col-lg-4 col-md-4 col-sm-6 col-xs-12">
            <?php print $column['content'] ?>
          </div>

          <?php if($i % 2 == 0): ?>
            <div class="clearfix visible-sm-block"></div>
          <?php endif; ?>

          <?php if($i % 3 == 0): ?>
            <div class="clearfix visible-lg-block"></div>
            <div class="clearfix visible-md-block"></div>
          <?php endif; ?>

          <?php $i++; ?>
        <?php endforeach ?>

      <?php endforeach ?>
    </div>
</div>