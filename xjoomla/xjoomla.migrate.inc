<?php
function xjoomla_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'joomla' => array(
        'title' => t('Joomla Migrations'),
        'default_format' => 'filtered_html',
      ),
    ),
    'migrations' => array(
      'JoomlaNode' => array(
        'class_name' => 'XJoomlaNodeMigration',
        'group_name' => 'Joomla',
    ),
      'JoomlaUser' => array(
        'class_name' => 'XJoomlaUserMigration',
        'group_name' => 'Joomla',
      ),
    ),
  );
  return $api;
}
?>
