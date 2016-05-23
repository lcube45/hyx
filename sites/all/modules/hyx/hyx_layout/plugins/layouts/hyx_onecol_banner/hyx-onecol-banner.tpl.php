<?php //dpm(get_defined_vars()); ?>
<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="banner bg-gray-dark">
      <div class="container">
        <div class="row">
          <?php print $content['top']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['middle']): ?>
    <div class="container">
      <div class="row">
        <?php print $content['middle']; ?>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['center']): ?>
    <div class="banner bg-gray-lighter center">
      <div class="container">
        <div class="row">
          <?php print $content['center']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="container">
      <div class="row">
        <?php print $content['bottom']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
