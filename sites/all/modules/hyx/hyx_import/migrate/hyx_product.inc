<?php

/**
 * @file
 *   Commerce Product migration.
 *   This is a dynamic migration, reused for every product type
 *   (so that products of each type can be imported separately)
 */

class HyxProductMigration extends Migration {

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Ubercart node ID',
          'alias' => 'ucp',
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'product')
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $connection = commerce_migrate_ubercart_get_source_connection();
    $query = $connection->select('node', 'n');
    $query->innerJoin('uc_products', 'ucp', 'n.nid = ucp.nid AND n.vid = ucp.vid');
    $query->fields('n', array('nid', 'vid', 'type', 'title', 'created', 'changed', 'status'))
      ->fields('ucp', array('model', 'sell_price'))
      ->fields('ucp',array('weight', 'weight_units', 'length', 'width', 'height','length_units'))
      ->condition('n.type', 'product')
      ->distinct();

    // Only deals with one currency, but at least trys to detect what one.
    $currency_code_setting = $connection->select('variable', 'v')
      ->fields('v', array('value'))
      ->condition('v.name', 'uc_currency_code')
      ->execute()->fetchField();

    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'product');

    // Properties
    $this->addFieldMapping('sku', 'model')->dedupe('commerce_product', 'sku');
    $this->addFieldMapping('type', 'type')->defaultValue('product');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'changed');
    $this->addFieldMapping('uid', 'uid')->defaultValue(0);

    // physical fields
    $this->addFieldMapping('field_poids','weight')->defaultValue(0);
    $this->addFieldMapping('field_poids:unit','weight_units')->defaultValue('g');

    $this->addFieldMapping('field_dimensions')->defaultValue(1);
    $this->addFieldMapping('field_dimensions:length','length');
    $this->addFieldMapping('field_dimensions:width','width');
    $this->addFieldMapping('field_dimensions:height','height');
    $this->addFieldMapping('field_dimensions:unit','length_units')->defaultValue('cm');

    // Probably unnecessary but we should respect the status of the old products.
    $this->addFieldMapping('status', 'status')->defaultValue(1);
    $this->addFieldMapping('language', NULL)->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping(NULL, 'vid')->issueGroup(t('DNM'));
    $this->addFieldMapping('path')->issueGroup(t('DNM'));
    $this->addFieldMapping('commerce_price', 'sell_price');

    if ($currency_code_setting == NULL) {
      $this->addFieldMapping('commerce_price:currency_code', NULL)->defaultValue('USD');
    }
    else {
      $this->addFieldMapping('commerce_price:currency_code', NULL)->defaultValue(unserialize($currency_code_setting));
    }
  }
}
