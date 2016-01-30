<?php

class HyxAuteurMigration extends HyxNodeMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_tags', 4)->sourceMigration('Tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');

    // image
    $this->addFieldMapping('field_auteur_image', 'field_auteur_image')->sourceMigration('File');
    $this->addFieldMapping('field_auteur_image:file_class')->defaultValue('MigrateFileFid');

  }
}