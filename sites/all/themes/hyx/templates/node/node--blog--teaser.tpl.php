<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> thumbnail clearfix"<?php print $attributes; ?>>
  <?php print render($content['field_blog_image']); ?>
  <div class="caption">
    <h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    <?php print render($content['field_soustitre']); ?>
    <h6 class="note"><?php print t('Publié le').' '.date('d/m/Y',$created); ?></h6>
    <p><?php print render($content['body']); ?></p>
    <p><a href="<?php print $node_url; ?>" class="btn btn-primary" role="button"><?php print t('Read more'); ?></a></p>
  </div>
</article>