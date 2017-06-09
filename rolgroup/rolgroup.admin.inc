<?php

/**
 * @file
 * admin page for rolgroup
 */

function rolgroup_admin_settings(){

  $active = variable_get('rolgroup_taxonomy_types');
  $taxonomies = db_select('taxonomy_vocabulary','tv')->fields('tv', array
  ('name'))->execute()->fetchCol();
  foreach ($taxonomies as $key => $tax){
    $list[$tax] = $tax;
  }

  $form['rolgroup_taxonomy_types'] = array(
    '#type' => 'select',
    '#title' => t('Create rol to these terms'),
    '#options' => $list,
    '#default_value' => $active,
    '#description' => t('the active vocabulary has a rol idem to term is: '.
      $active),
  );

  return system_settings_form($form);
}
