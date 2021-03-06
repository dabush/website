<?php
/**
 * @file
 * gms_text.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gms_text_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|text|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_translation',
        1 => 'group_left',
        2 => 'group_right',
        3 => 'field_icon',
        4 => 'field_icon_source',
        5 => 'field_vm_link',
        6 => 'group_metadata',
        7 => 'field_introduction_to_the_text',
        8 => 'field_intro_manuscript',
        9 => 'field_about_edition',
        10 => 'field_critical_conversation',
        11 => 'field_credits',
        12 => 'field_author',
        13 => 'field_language',
        14 => 'field_period',
        15 => 'field_genre',
        16 => 'field_keywords',
        17 => 'field_tei_file',
      ),
    ),
    'fields' => array(
      'title_translation' => 'ds_content',
      'group_left' => 'ds_content',
      'group_right' => 'ds_content',
      'field_icon' => 'ds_content',
      'field_icon_source' => 'ds_content',
      'field_vm_link' => 'ds_content',
      'group_metadata' => 'ds_content',
      'field_introduction_to_the_text' => 'ds_content',
      'field_intro_manuscript' => 'ds_content',
      'field_about_edition' => 'ds_content',
      'field_critical_conversation' => 'ds_content',
      'field_credits' => 'ds_content',
      'field_author' => 'ds_content',
      'field_language' => 'ds_content',
      'field_period' => 'ds_content',
      'field_genre' => 'ds_content',
      'field_keywords' => 'ds_content',
      'field_tei_file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|text|default'] = $ds_layout;

  return $export;
}
