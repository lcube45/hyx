<?php
/**
 * @file field--fences-ul.tpl.php
 * Wrap each field value in the <li> element and all of them in the <ul> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-ul-element
 */
?>
<div class="row">
  <?php foreach ($items as $delta => $item): ?>
    <div class="col-sm-4 col-xs-12">
      <?php print render($item); ?>
    </div>
  <?php endforeach; ?>
</div>