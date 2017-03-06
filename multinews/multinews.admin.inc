<?php

/**
 * @file
 * admin page for Multinews
 */

/**
 * implements module form.
 */
function multinews_admin_settings() {

  $content_types_list = node_type_get_types();
  foreach ($content_types_list as $key=> $type) {
    $list[$key] = $type->name;
  }
  $form['multinews_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Add posibility of copy to these content types'),
    '#options' => $list,
    '#default_value'=> variable_get('multinews_node_types', array('noticias')),
    '#description' => t('the selected content types could be copy to other 
    db'),
  );
  return system_settings_form($form);

}