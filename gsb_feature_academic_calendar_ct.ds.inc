<?php
/**
 * @file
 * gsb_feature_academic_calendar_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_academic_calendar_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|academic_calendar_event|main_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'academic_calendar_event';
  $ds_fieldsetting->view_mode = 'main_list';
  $ds_fieldsetting->settings = array(
    'field_academic_calendar_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|academic_calendar_event|main_list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_academic_calendar_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|academic_calendar_event|main_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'academic_calendar_event';
  $ds_layout->view_mode = 'main_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_date',
        1 => 'field_academic_calendar_link',
      ),
    ),
    'fields' => array(
      'field_event_date' => 'ds_content',
      'field_academic_calendar_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|academic_calendar_event|main_list'] = $ds_layout;

  return $export;
}
