<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<!-- start top bar -->
<div class="hyx-header">
  <a href="<?php print $front_page; ?>">
    <div class="hyx-logo-container">
      <img class="hyx-logo" src="<?php print $logo; ?>">
      <div class="color-slider">
        <div class="hyx-logo-fill bg-primary"></div>
        <div class="hyx-logo-fill bg-gray"></div>
        <div class="hyx-logo-fill bg-primary"></div>
      </div>
    </div>
  </a>


  <ul class="hyx-header-toolbox">

    <!-- TRADUCTION -->
    <li class="hyx-toolbox-item">
      <div class="hyx-radio-list" data-toggle="buttons" role="traduction">
        <?php print render($locale); ?>
      </div>
    </li>

    <!-- PANIER -->
    <li class="hyx-toolbox-item">
      <button type="button" class="btn hyx-button" data-title="<?php print t('Shopping cart'); ?> (<?php print render($cart['content']); ?>)" data-title-xs="" disabled="">
        <span class="hyx-icon-basket"></span>
      </button>
    </li>

    <!-- LOGIN -->
    <li class="hyx-toolbox-item">
      <button type="button" class="btn hyx-button" data-title="connection" data-title-xs="">
        <span class="hyx-icon-user"></span>
      </button>
    </li>

  </ul>

</div>
<!-- end top bar -->

<!-- start navigation -->
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
    <div class="<?php print $container_class; ?>">
        <div class="navbar-header">
            <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
                    <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
            <?php endif; ?>
        </div>

        <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
            <div class="navbar-collapse collapse">
                <nav role="navigation">
                    <?php if (!empty($primary_nav)): ?>
                        <?php print render($primary_nav); ?>
                    <?php endif; ?>

                    <?php print render($search_block_form['content']); ?>

                    <?php if (!empty($secondary_nav)): ?>
                        <?php print render($secondary_nav); ?>
                    <?php endif; ?>
                    <?php if (!empty($page['navigation'])): ?>
                        <?php print render($page['navigation']); ?>
                    <?php endif; ?>
                </nav>
            </div>
        <?php endif; ?>
    </div>
</header>
<!-- end navigation -->

<!-- start main content -->
<div class="main-container">
    <section>
        <a id="main-content"></a>
        <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <div><?php print $messages; ?></div>
        <?php print render($page['content']); ?>
    </section>
</div>
<!-- end main content -->

<!-- start 3 blocks footer -->
<div class="wrapper-footer">
    <div class="<?php print $container_class; ?>">
        <div class="row">
            <?php if(!empty($page['footer_first'])): ?>
            <div id="footer-first" class="col-sm-4">
                <?php print render($page['footer_first']); ?>
            </div>
            <?php endif; ?>

            <?php if(!empty($page['footer_second'])): ?>
            <div id="footer-second" class="col-sm-4">
                <?php print render($page['footer_second']); ?>
            </div>
            <?php endif; ?>

            <?php if(!empty($page['footer_third'])): ?>
            <div id="footer-third" class="col-sm-4">
                <?php print render($page['footer_third']); ?>
            </div>
            <?php endif; ?>
        </div>
    </div>
</div>
<!-- end 3 blocks footer -->

<!-- start menu footer -->
<?php if (!empty($page['footer'])): ?>
<footer class="footer">
    <div class="<?php print $container_class; ?>">
        <?php print render($page['footer']); ?>
    </div>
</footer>
<?php endif; ?>
<!--end menu footer -->