<?php
/**
 * @file
 * f_home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function f_home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page_content_panel';
  $page->task = 'page';
  $page->admin_title = 'Homepage Content Panel';
  $page->admin_description = '';
  $page->path = 'homepage-content-panel';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_content_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page_content_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'aap-body-class',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => ' <!--This is for the orange and green styling-->
		  <link rel="stylesheet" href="/sites/all/themes/aap_theme/css/jquery-ui-1.10.3.custom.css" />
		  <!--This is for jQuery-->
		  <script src="http://code.jquery.com/jquery-1.9.1.js"></script>
		  <!--This is for jQuery accordion UI control-->
		  <script src="http://code.jquery.com/ui/1.10.3/jquery-ui.js"></script>
  <!--ACCORDION CODE START-->
	  <script>
	  $(function() {
		$( "#accordion" ).accordion({
		  collapsible: true, active:null
		});
	  });
	  </script>

<div id="accordion">
	  <h3>AAP 1</h3>
		  <div>
		  <!--Image path to be given in the src tag-->
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<!--Content to be added within the tag <p> </p>-->
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 2</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 3</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 4</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 5</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 6</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	  <h3>AAP 7</h3>
		  <div>
		  <img src="/sites/all/themes/aap_theme/images/aap_image.jpg" style="float:left"/>
			<p>
			Content to be added here...
			</p>
		  </div>
	</div>
<!--ACCORDION SECTION END-->',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="home-box-top"><!-- TODO main banner image below --><a href="http://aamaadmiparty.org/news/aam-aadmi-party-gets-broom-as-its-election-symbol"><img alt="Election Symbol" src="http://aamaadmiparty.org/sites/default/files/AAP%20Symbol_2.jpg" style="height: 273px; width: 673px;" /></a></div><div class="home-box-bottom"><div class="movstrip clearfix"><ul><li><!-- TODO small banner image for slot 1 --><a href="/news/campaign-in-full-swing-in-rkpuram" title="Women Security Force"><img alt="Durga Nagpal Press Conference" src="/sites/default/files/RKPuram-Aug%2012.jpg" style="height: 108px; width: 200px;" /></a>&nbsp;<b>Shazia Ilmi </b>leads the <strong><a href="/news/campaign-in-full-swing-in-rkpuram">R.K.Puram campaign</a></strong></li><li><!-- TODO small banner image for slot 2 --><a href="http://delhi.aamaadmiparty.org/Delhi-Elections-2013/CandidateList"><img alt="Candidate List" src="/sites/default/files/CandidateListBanner.jpeg" style="height: 108px; width: 200px;" /></a>&nbsp;Delhi Election Candidate List - <a href="/Delhi-Elections-2013/CandidateList"><strong>The latest updates</strong></a></li><li><!-- TODO Multiple small banner images for slot 3 --><b><a href="http://aamaadmiparty.org/news/delhi-2013-arvinds-campaign-meeting"><img src="http://aamaadmiparty.org/sites/default/files/styles/image_slideshow/public/Jansabha-Nehru%20Place-Delhi.jpg" style="width: 200px; height: 108px;" /></a>&nbsp;Arvind&#39;s&nbsp;</b><a href="http://aamaadmiparty.org/news/delhi-2013-arvinds-campaign-meeting"><strong>meeting with traders</strong></a> at Nehru Place, Delhi</li><li><!-- TODO small banner image for slot 4 --><b><a href="http://delhi.aamaadmiparty.org/news/fifth-list-of-candidates-for-7-assembly-seats-declared-youngsters-prefered"><img src="/sites/default/files/FifthCandidateList.jpg" style="width: 200px; height: 106px;" /></a><b>Fifth Candidate List</b>&nbsp;- </b>AAP has announced its <a href="/news/fifth-list-of-candidates-for-7-assembly-seats-declared-youngsters-prefered"><strong>fifth candidate list</strong></a> for 7 additional constituencies</li></ul></div></div><center><p><b><a href="https://www.facebook.com/AamAadmiParty" target="_blank"><img height="55" src="/sites/default/files/facebook-icon.png" width="55" /></a><a href="https://twitter.com/aamaadmiparty" target="_blank"><img height="55" src="/sites/default/files/twitter-icon.png" width="55" /></a><a href="http://www.youtube.com/user/indiACor2010" target="_blank"><img height="55" src="/sites/default/files/youtube-icon.png" width="55" /></a></b></p><p><b><a href="mailto:blogs@delhi.aamaadmiparty.org">Share your thoughts with us</a></b></p><p><b>&nbsp;</b></p></center>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page_content_panel'] = $page;

  return $pages;

}
