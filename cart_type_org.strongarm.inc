<?php
/**
 * @file
 * cart_type_org.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_type_org_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cart_organization';
  $strongarm->value = 0;
  $export['comment_anonymous_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cart_organization';
  $strongarm->value = '1';
  $export['comment_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cart_organization';
  $strongarm->value = 1;
  $export['comment_default_mode_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cart_organization';
  $strongarm->value = '50';
  $export['comment_default_per_page_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cart_organization';
  $strongarm->value = 1;
  $export['comment_form_location_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cart_organization';
  $strongarm->value = '1';
  $export['comment_preview_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cart_organization';
  $strongarm->value = 1;
  $export['comment_subject_field_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_cart_organization';
  $strongarm->value = '1';
  $export['content_complete_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_fields_cart_organization';
  $strongarm->value = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_cart_org_type',
    3 => 'field_cart_location',
  );
  $export['content_complete_fields_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cart_organization';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_minimal' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_curator' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_sponsor' => array(
        'custom_settings' => TRUE,
      ),
      'cart_vmode_publisher' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cart_organization';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cart_organization';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cart_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cart_organization';
  $strongarm->value = '1';
  $export['node_preview_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cart_organization';
  $strongarm->value = 0;
  $export['node_submitted_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_cart_organization';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'cart_vmode_minimal' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'cart_vmode_sponsor' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'cart_vmode_publisher' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_cart_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_cart_organization_pattern';
  $strongarm->value = 'organizations/[node:title]';
  $export['pathauto_node_cart_organization_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_cart_organization';
  $strongarm->value = array();
  $export['simplify_nodes_cart_organization'] = $strongarm;

  return $export;
}
