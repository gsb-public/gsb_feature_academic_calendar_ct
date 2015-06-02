<?php
/**
 * @file
 * gsb_feature_academic_calendar_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_academic_calendar_ct_taxonomy_default_vocabularies() {
  return array(
    'academic_calendar_display' => array(
      'name' => 'Academic Calendar Display',
      'machine_name' => 'academic_calendar_display',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
