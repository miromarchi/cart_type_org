<?php
/**
 * @file
 * cart_type_org.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cart_type_org_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_organization:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_organization';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'person';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '363ff27d-3dd4-49cf-88fa-6fed2dd14118';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e57fe86-96a6-4e55-a0fe-37e1335a4ca5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_completeness-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e57fe86-96a6-4e55-a0fe-37e1335a4ca5';
    $display->content['new-7e57fe86-96a6-4e55-a0fe-37e1335a4ca5'] = $pane;
    $display->panels['contentmain'][0] = 'new-7e57fe86-96a6-4e55-a0fe-37e1335a4ca5';
    $pane = new stdClass();
    $pane->pid = 'new-d8472017-1426-40db-b08b-bdcc3663d2f0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_geolocation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_leaflet',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'leaflet_map' => 'stamen-toner',
        'height' => '250',
        'popup' => array(
          'show' => 0,
          'text' => '',
        ),
        'zoom' => array(
          'initialZoom' => '7',
          'minZoom' => '-1',
          'maxZoom' => '-1',
        ),
        'icon' => array(
          'iconType' => 'marker',
          'iconUrl' => '',
          'shadowUrl' => '',
          'html' => '',
          'iconImageStyle' => '',
          'htmlClass' => '',
          'iconSize' => array(
            'x' => '',
            'y' => '',
          ),
          'iconAnchor' => array(
            'x' => '',
            'y' => '',
          ),
          'shadowAnchor' => array(
            'x' => '',
            'y' => '',
          ),
          'popupAnchor' => array(
            'x' => '',
            'y' => '',
          ),
        ),
        'vector_display' => array(
          'stroke_override' => 0,
          'stroke' => 0,
          'color' => '#ff0000',
          'weight' => '',
          'opacity' => '',
          'dashArray' => '',
          'fill' => 0,
          'fillColor' => '#ff0000',
          'fillOpacity' => '',
          'clickable' => 0,
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8472017-1426-40db-b08b-bdcc3663d2f0';
    $display->content['new-d8472017-1426-40db-b08b-bdcc3663d2f0'] = $pane;
    $display->panels['contentmain'][1] = 'new-d8472017-1426-40db-b08b-bdcc3663d2f0';
    $pane = new stdClass();
    $pane->pid = 'new-3195512b-476e-4110-b60a-8dcebad4dc33';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3195512b-476e-4110-b60a-8dcebad4dc33';
    $display->content['new-3195512b-476e-4110-b60a-8dcebad4dc33'] = $pane;
    $display->panels['contentmain'][2] = 'new-3195512b-476e-4110-b60a-8dcebad4dc33';
    $pane = new stdClass();
    $pane->pid = 'new-406a876c-e899-4f16-9118-f47fe54ab74b';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '406a876c-e899-4f16-9118-f47fe54ab74b';
    $display->content['new-406a876c-e899-4f16-9118-f47fe54ab74b'] = $pane;
    $display->panels['contentmain'][3] = 'new-406a876c-e899-4f16-9118-f47fe54ab74b';
    $pane = new stdClass();
    $pane->pid = 'new-04953fdc-7bdc-4ed7-aa92-347ece9d8dec';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04953fdc-7bdc-4ed7-aa92-347ece9d8dec';
    $display->content['new-04953fdc-7bdc-4ed7-aa92-347ece9d8dec'] = $pane;
    $display->panels['sidebar'][0] = 'new-04953fdc-7bdc-4ed7-aa92-347ece9d8dec';
    $pane = new stdClass();
    $pane->pid = 'new-e40cd174-485e-468d-a0a5-2c986fea6868';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e40cd174-485e-468d-a0a5-2c986fea6868';
    $display->content['new-e40cd174-485e-468d-a0a5-2c986fea6868'] = $pane;
    $display->panels['sidebar'][1] = 'new-e40cd174-485e-468d-a0a5-2c986fea6868';
    $pane = new stdClass();
    $pane->pid = 'new-8c8f44ac-e376-40cc-bf13-37c09b3acd30';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8c8f44ac-e376-40cc-bf13-37c09b3acd30';
    $display->content['new-8c8f44ac-e376-40cc-bf13-37c09b3acd30'] = $pane;
    $display->panels['sidebar'][2] = 'new-8c8f44ac-e376-40cc-bf13-37c09b3acd30';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-d8472017-1426-40db-b08b-bdcc3663d2f0';
  $panelizer->display = $display;
  $export['node:cart_organization:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_organization:default:cart_vmode_minimal';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_organization';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'cart_vmode_minimal';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H4';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cf3988d4-6902-4d46-aa80-03670a85b749';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4dd99c5-dd50-40fb-a065-069fa22384a6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4dd99c5-dd50-40fb-a065-069fa22384a6';
    $display->content['new-a4dd99c5-dd50-40fb-a065-069fa22384a6'] = $pane;
    $display->panels['center'][0] = 'new-a4dd99c5-dd50-40fb-a065-069fa22384a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a4dd99c5-dd50-40fb-a065-069fa22384a6';
  $panelizer->display = $display;
  $export['node:cart_organization:default:cart_vmode_minimal'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_organization:default:cart_vmode_sponsor';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_organization';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'cart_vmode_sponsor';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '77a754fa-7f6f-4e0f-98a9-fceba1b59192';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-194cdae8-10f9-4add-9bad-5592f524fd70';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_geolocation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'staticmap',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'preset' => 'cart_staticmap_teaser',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '194cdae8-10f9-4add-9bad-5592f524fd70';
    $display->content['new-194cdae8-10f9-4add-9bad-5592f524fd70'] = $pane;
    $display->panels['center'][0] = 'new-194cdae8-10f9-4add-9bad-5592f524fd70';
    $pane = new stdClass();
    $pane->pid = 'new-2bbcec4c-effc-41e1-bc24-80a63f87700a';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'cart_vmode_sponsor',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2bbcec4c-effc-41e1-bc24-80a63f87700a';
    $display->content['new-2bbcec4c-effc-41e1-bc24-80a63f87700a'] = $pane;
    $display->panels['center'][1] = 'new-2bbcec4c-effc-41e1-bc24-80a63f87700a';
    $pane = new stdClass();
    $pane->pid = 'new-4bb31630-b23e-4b09-b971-dbebd1e54fd0';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4bb31630-b23e-4b09-b971-dbebd1e54fd0';
    $display->content['new-4bb31630-b23e-4b09-b971-dbebd1e54fd0'] = $pane;
    $display->panels['center'][2] = 'new-4bb31630-b23e-4b09-b971-dbebd1e54fd0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_organization:default:cart_vmode_sponsor'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_organization:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_organization';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H3 class="node-title"';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = 'd32e3277-d078-44ec-ac57-0bc4c6c5c2a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14102c88-2901-4d0b-8e47-dddecfb7d5d3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_geolocation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'staticmap',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'leaflet_map' => 'stamen-toner',
        'height' => '80',
        'popup' => array(
          'show' => 0,
          'text' => '',
        ),
        'zoom' => array(
          'initialZoom' => '7',
          'minZoom' => '7',
          'maxZoom' => '7',
        ),
        'preset' => 'cart_staticmap_teaser',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14102c88-2901-4d0b-8e47-dddecfb7d5d3';
    $display->content['new-14102c88-2901-4d0b-8e47-dddecfb7d5d3'] = $pane;
    $display->panels['middle'][0] = 'new-14102c88-2901-4d0b-8e47-dddecfb7d5d3';
    $pane = new stdClass();
    $pane->pid = 'new-34887486-99cc-4fce-9c95-1d7e9242bb2b';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'teaser',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34887486-99cc-4fce-9c95-1d7e9242bb2b';
    $display->content['new-34887486-99cc-4fce-9c95-1d7e9242bb2b'] = $pane;
    $display->panels['middle'][1] = 'new-34887486-99cc-4fce-9c95-1d7e9242bb2b';
    $pane = new stdClass();
    $pane->pid = 'new-4249c7ab-271a-433e-9cca-71057bdb5aa2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4249c7ab-271a-433e-9cca-71057bdb5aa2';
    $display->content['new-4249c7ab-271a-433e-9cca-71057bdb5aa2'] = $pane;
    $display->panels['middle'][2] = 'new-4249c7ab-271a-433e-9cca-71057bdb5aa2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_organization:default:teaser'] = $panelizer;

  return $export;
}
