<?php
/**
 * @file
 * axelerant_test_case admin functions.
 * Implements Admin functions for APIs of Drupal website
 */

/**
 * Generates form to configure interface.
 */
function axelerant_test_cases_settings_form() {
  $form = array();
  // Provide message to be display based on user.
  $form['axelerant_test_cases_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Block Message'),
    '#default_value' => variable_get('axelerant_test_cases_message'),
    '#description' => t('Display user configured message based on user on the block.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
