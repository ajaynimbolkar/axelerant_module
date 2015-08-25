<?php

/**
 * @file
 * This file defines panels ctools content type (pane) in addition to block.
 *
 */

// Define the plugin for tools content type (pane).
$plugin = array(
  'single' => TRUE,
  'title' => t('Axelerant test cases block'),
  'description' => t('Shows a Axelerant block information with basic configuration options.'),
  'category' => t('Axelerant Block'),
  'edit form' => 'axelerant_test_cases_edit_form',
  'render callback' => 'axelerant_test_cases_render',
  'content_types' => array('axelerant_test_cases_block'),
 );

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function axelerant_test_cases_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['block_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Block Messsage'),
    '#description' => t('The Block message for user.'),
    '#default_value' => !empty($conf['block_message']) ? $conf['block_message'] : 'Hello User',
  );
  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function axelerant_test_cases_edit_form_submit($form, &$form_state) {
  foreach (array('block_message') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback function.
 *
 * @param $subtype
 * @param $conf
 * @param $args
 * @param $context
 * @return stdClass
 */
function axelerant_test_cases_render($subtype, $conf, $args, $context) {
  global $user;

  $block = new stdClass();
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : 'You last logged in at';
  $content = "";
  $content .= !empty($conf['block_message']) ? t("@block_message", array('@block_message' => $conf['block_message'])) .'<br/>' : '';
  $content .= format_date($user->access, $type = 'short', $format = '', $timezone = $user->timezone, $langcode = NULL);

  $block->content = $content;

  return $block;
}
?>
