<?php

class HyxBlogMigration extends HyxNodeMigration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);

        $this->addFieldMapping('field_blog_categorie', 5)->sourceMigration('Categorie');
        $this->addFieldMapping('field_blog_categorie:source_type')->defaultValue('tid');

        $this->addFieldMapping('field_tags', 4)->sourceMigration('Tags');
        $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');

        // image
        $this->addFieldMapping('field_blog_image', 'field_blog_image')->sourceMigration('File');
        $this->addFieldMapping('field_blog_image:file_class')->defaultValue('MigrateFileFid');

    }
}