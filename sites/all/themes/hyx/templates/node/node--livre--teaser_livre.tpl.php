<?php //dpm($content); ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> hyx-cover-container clearfix"<?php print $attributes; ?>>
  <div class="hyx-cover-over">
    <a href="<?php print $node_url; ?>">
      <?php print render($content['field_soustitre']); ?>
    </a>
    <a href="<?php print $node_url; ?>">
      <h3><?php print $title; ?></h3>
    </a>
    <p>Edition : <?php print render($content['field_langue']); ?></p>
    <h5><?php print render($content['product:commerce_price']); ?></h5>
    <ul class="hyx-cover-over-ui">
      <li>
        <?php print render($content['field_produit']); ?>
      </li>
      <li>
        <a href="<?php print $node_url; ?>">
          <button type="button" class="btn hyx-button cover-bt-view">
            <span class="hyx-icon-infos"></span>
          </button>
        </a>
      </li>
    </ul>
  </div>
  <?php
  // Hide comments, tags, and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  hide($content['field_tags']);
  print render($content['field_image']);
  ?>
</article>