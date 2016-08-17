<?php
class HyxLIvreMigration extends HyxNodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_soustitre', 'field_product_soustitre');
    $this->addFieldMapping('body:summary', 'field_product_teaser');
    $this->addFieldMapping('field_thematique', 1)->sourceMigration('Thematique');
    $this->addFieldMapping('field_thematique:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_collection', 2)->sourceMigration('Collection');
    $this->addFieldMapping('field_collection:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_langue', 3)->sourceMigration('Langue');
    $this->addFieldMapping('field_langue:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags', 4)->sourceMigration('Tags');
    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');

    // auteur
    $this->addFieldMapping('field_auteur', 'field_product_auteur')->sourceMigration('Auteur');

    // date de parution
    $this->addFieldMapping('field_date', 'field_product_date_parution');

    // nb de pages
    $this->addFieldMapping('field_nb_page', 'field_product_nb_pages');

    // couleur
    $this->addFieldMapping('field_couleur', 'field_product_couleurs');

    // reliure
    $this->addFieldMapping('field_type_reliure', 'field_product_reliure');

    // partenaire
    $this->addFieldMapping('field_partenaire', 'field_product_partenaire');

    // sommaire
    $this->addFieldMapping('field_sommaire', 'field_product_sommaire');

    // image
    $this->addFieldMapping('field_image', 'field_image_cache')->sourceMigration('File');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');

    // liens internet
    $this->addFieldMapping('field_lien', 'field_product_site');

    // document
    $this->addFieldMapping('field_document', 'field_product_download')->sourceMigration('File');
    $this->addFieldMapping('field_document:file_class')->defaultValue('MigrateFileFid');

    // extrait
    $this->addFieldMapping('field_fichier', 'field_product_extrait')->sourceMigration('File');
    $this->addFieldMapping('field_fichier:file_class')->defaultValue('MigrateFileFid');

    // product reference
    $this->addFieldMapping('field_produit', 'nid')->sourceMigration('HyxProduct');

    // ouvrages similaires
    $this->addFieldMapping('field_livre_similaire', 'field_product_similar')->sourceMigration('Livre');
  }
}