<?php
/**
 * @file field--fences-ul.tpl.php
 * Wrap each field value in the <li> element and all of them in the <ul> element.
 *
 * @see http://developers.whatwg.org/grouping-content.html#the-ul-element
 */
?>
<div class="row links">
  <?php foreach ($items as $delta => $item): ?>
    <div class="col-sm-4 col-xs-12">

      <?php
        $image = array(
          'style_name' => 'livre_extrait',
          'path' => $item['#file']->uri,
          'alt' => $item['#file']->alt,
          'title' => $item['#file']->title
        );
      ?>

      <a href="<?php print file_create_url($item['#file']->uri); ?>" title="<?php $item['#file']->title; ?>" class="thumbnail" data-gallery>
        <?php print theme('image_style', $image); ?>
      </a>

    </div>
  <?php endforeach; ?>
</div>

<div id="blueimp-gallery" class="blueimp-gallery blueimp-gallery-controls" data-use-bootstrap-modal="false">
    <!-- The container for the modal slides -->
    <div class="slides"></div>
    <!-- Controls for the borderless lightbox -->
    <h3 class="title"></h3>
    <a class="prev">‹</a>
    <a class="next">›</a>
    <a class="close">×</a>
    <a class="play-pause"></a>
    <ol class="indicator"></ol>
    <!-- The modal dialog, which will be used to wrap the lightbox content -->
    <div class="modal fade">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" aria-hidden="true">&times;</button>
                    <h4 class="modal-title"></h4>
                </div>
                <div class="modal-body next"></div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default pull-left prev">
                        <i class="glyphicon glyphicon-chevron-left"></i>
                        Previous
                    </button>
                    <button type="button" class="btn btn-primary next">
                        Next
                        <i class="glyphicon glyphicon-chevron-right"></i>
                    </button>
                </div>
            </div>
        </div>
    </div>
</div>