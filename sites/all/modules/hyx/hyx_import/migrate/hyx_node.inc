<?php
/**
 * Common mappings for the Drupal 6 node migration.
 */
abstract class HyxNodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}