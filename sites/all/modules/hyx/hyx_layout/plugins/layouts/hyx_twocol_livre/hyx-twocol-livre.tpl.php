<div class="hyx-wrapper <?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['top-left'] || $content['top-right']): ?>
    <div class="row">
      <?php print $content['top-left']; ?>
      <?php print $content['top-right']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['middle']): ?>
    <div class="row">
      <?php print $content['middle']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['center-left'] || $content['center-right']): ?>
    <div class="row">
      <?php print $content['center-left']; ?>
      <?php print $content['center-right']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['bottom-left'] || $content['bottom-right']): ?>
    <div class="row">
      <?php print $content['bottom-left']; ?>
      <?php print $content['bottom-right']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>

</div>