<?php
/**
 * @file
 * bibliofil_common.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliofil_common_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer bpi'.
  $permissions['administer bpi'] = array(
    'name' => 'administer bpi',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'bpi',
  );

  // Exported permission: 'administer ding ipe filter'.
  $permissions['administer ding ipe filter'] = array(
    'name' => 'administer ding ipe filter',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_ipe_filter',
  );

  // Exported permission: 'administer ding provider'.
  $permissions['administer ding provider'] = array(
    'name' => 'administer ding provider',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_provider',
  );

  // Exported permission: 'administer ding toggle format'.
  $permissions['administer ding toggle format'] = array(
    'name' => 'administer ding toggle format',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_toggle_format',
  );

  // Exported permission: 'administer fe promote'.
  $permissions['administer fe promote'] = array(
    'name' => 'administer fe promote',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_frontend',
  );

  // Exported permission: 'administer news settings'.
  $permissions['administer news settings'] = array(
    'name' => 'administer news settings',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_news',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer ting settings'.
  $permissions['administer ting settings'] = array(
    'name' => 'administer ting settings',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ting',
  );

  // Exported permission: 'administer user settings'.
  $permissions['administer user settings'] = array(
    'name' => 'administer user settings',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'ding_user',
  );

  // Exported permission: 'dynamic background configure default'.
  $permissions['dynamic background configure default'] = array(
    'name' => 'dynamic background configure default',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: 'dynamic background upload default'.
  $permissions['dynamic background upload default'] = array(
    'name' => 'dynamic background upload default',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: 'dynamic backgrounds css callback'.
  $permissions['dynamic backgrounds css callback'] = array(
    'name' => 'dynamic backgrounds css callback',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: 'dynamic backgrounds set default'.
  $permissions['dynamic backgrounds set default'] = array(
    'name' => 'dynamic backgrounds set default',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: 'dynamic backgrounds weight'.
  $permissions['dynamic backgrounds weight'] = array(
    'name' => 'dynamic backgrounds weight',
    'roles' => array(
      'administrators' => 'administrators',
    ),
    'module' => 'dynamic_background',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrators' => 'administrators',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
