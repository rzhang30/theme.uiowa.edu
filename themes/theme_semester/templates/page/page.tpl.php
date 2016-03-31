<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <?php if ($site_slogan): ?>
    <div class="site-slogan"><?php print $site_slogan; ?></div>
  <?php endif; ?>
  <?php if ($site_name): ?>
    <h1 class="site-name"><a href="<?php print $front_page; ?>" rel="home" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></h1>
  <?php endif; ?>
</header>

<nav class="navbar">
  <div class="container">
    <?php print render($page['navigation']); ?>
  </div>
</nav>

<div id="main-wrapper">
  <div id="main" class="main">
    <div class="container">
      <?php if ($breadcrumb): ?>
        <div id="breadcrumb" class="visible-desktop">
          <?php print $breadcrumb; ?>
        </div>
      <?php endif; ?>
      <?php if ($messages): ?>
        <div id="messages">
          <?php print $messages; ?>
        </div>
      <?php endif; ?>
      <div id="page-header">

        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
      </div>
    </div>
    <div id="content" class="container">
      <div class="content">
        <?php if ($title): ?>
          <div class="page-header">
            <h1 class="title"><?php print $title; ?></h1>
          </div>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </div>
      <?php if ($page['sidebar']): ?>
        <div class="sidebar">
          <?php print render($page['sidebar']); ?>
        </div> <!-- /#sidebar -->
      <?php endif; ?>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
    <?php print render($page['footer']); ?>
  </div>

</footer>
