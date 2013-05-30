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
    'event_category' => array(
      'name' => 'Event Category',
      'machine_name' => 'event_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'program' => array(
      'name' => 'Program',
      'machine_name' => 'program',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
