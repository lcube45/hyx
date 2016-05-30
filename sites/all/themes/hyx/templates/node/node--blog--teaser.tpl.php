<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> thumbnail clearfix"<?php print $attributes; ?>>
  <?php print render($content['field_blog_image']); ?>
  <div class="caption">
    <h3><?php print $title; ?></h3>
    <p><?php print render($content['body']); ?></p>
    <p><a href="<?php print $node_url; ?>" class="btn btn-primary" role="button"><?php print t('Read more'); ?></a></p>
  </div>
</article>