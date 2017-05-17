<?php
/**
 * @file
 * basic_staff_profile.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function basic_staff_profile_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-profile_sidebar_info-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'profile_sidebar_info-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'staff_profile',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cambridge_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sports' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'sports',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
