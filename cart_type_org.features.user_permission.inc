<?php
/**
 * @file
 * cart_type_org.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cart_type_org_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cart_organization content'.
  $permissions['create cart_organization content'] = array(
    'name' => 'create cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_organization content'.
  $permissions['delete any cart_organization content'] = array(
    'name' => 'delete any cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_organization content'.
  $permissions['delete own cart_organization content'] = array(
    'name' => 'delete own cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_organization content'.
  $permissions['edit any cart_organization content'] = array(
    'name' => 'edit any cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_organization content'.
  $permissions['edit own cart_organization content'] = array(
    'name' => 'edit own cart_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
