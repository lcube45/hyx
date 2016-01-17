<?php
class HyxAuteurMigration extends HyxNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_tags', 4)->sourceMigration('Tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');


  }
}