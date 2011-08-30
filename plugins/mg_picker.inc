<?php
/**
 * @file
 * 
 * 
 *
 * @author Kálmán Hosszu - hosszu.kalman@gmail.com
 */
 
/**
 * Implementing hook_INCLUDE_plugin().
 *
 * @return array 
 */
function mg_picker_mg_picker_plugin() {
  $plugins = array();
  
  $plugins['mg_picker'] = array(
    'title' => t('Media gallery picker'),
    'vendor url' => 'https://github.com/hosszukalman/mg_picker',
    'icon file' => 'mg_picker.gif',
    'icon title' => t('Select the media gallery.'),
    'settings' => array(
      'dialog' => array(
        'url' => base_path() . 'index.php?q=wysiwyg/mg_picker',
        'width' => 700,
        'height' => 500,
      ),
    ),
  );
  
  return $plugins;
}

/**
 * Implementing hook_wysiwyg_dialog().
 *
 * @param type $instance
 * @return type 
 */
function mg_picker_wysiwyg_dialog($instance) {
  drupal_set_title(t('This is the title?'));

  return array(
//    '#marup' => 'not good',
//    '#content' => 'not good',
  );
}