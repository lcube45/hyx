<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if ($content['top']): ?>
      <div class="row">
        <?php print $content['top']; ?>
      </div>
  <?php endif ?>

  <?php if ($content['middle']): ?>
    <div class="row">
      <?php print $content['middle']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['center']): ?>
    <div class="row">
      <?php print $content['center']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>
