<?php
/**
 * @file
 * hyx_recherche.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hyx_recherche_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function hyx_recherche_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "hyxsearch",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "livre" : "livre" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "lang_field" : "language",
            "languages" : { "und" : "und", "en" : "en", "fr" : "fr" }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_soustitre" : true,
              "field_sommaire" : true,
              "field_couleur" : true,
              "field_type_reliure" : true,
              "field_partenaire" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_soustitre" : true,
              "field_sommaire" : true,
              "field_couleur" : true,
              "field_type_reliure" : true,
              "field_partenaire" : true,
              "body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_soustitre" : true,
              "field_sommaire" : true,
              "field_couleur" : true,
              "field_type_reliure" : true,
              "field_partenaire" : true,
              "body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_soustitre" : true,
              "field_sommaire" : true,
              "field_couleur" : true,
              "field_type_reliure" : true,
              "field_partenaire" : true,
              "body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_soustitre" : true,
              "field_sommaire" : true,
              "field_couleur" : true,
              "field_type_reliure" : true,
              "field_partenaire" : true,
              "body:value" : true
            },
            "file" : "",
            "stopwords" : "mais\\r\\nfait\\r\\nle la les ceci cela ces\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_auteur" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_collection" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_couleur" : { "type" : "text", "boost" : "0.5" },
        "field_date" : { "type" : "date" },
        "field_langue" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_nb_page" : { "type" : "integer" },
        "field_partenaire" : { "type" : "text", "boost" : "0.5" },
        "field_sommaire" : { "type" : "text" },
        "field_soustitre" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_thematique" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_type_reliure" : { "type" : "text", "boost" : "0.5" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function hyx_recherche_default_search_api_page() {
  $items = array();
  $items['hyxsearchpage'] = entity_import('search_api_page', '{
    "index_id" : "default_node_index",
    "path" : "search",
    "name" : "HyxSearchPage",
    "machine_name" : "hyxsearchpage",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result",
      "language_filter" : { "fr" : "fr" },
      "empty_behavior" : "results"
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function hyx_recherche_default_search_api_server() {
  $items = array();
  $items['hyxsearch'] = entity_import('search_api_server', '{
    "name" : "HyxSearch",
    "machine_name" : "hyxsearch",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_default_node_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_auteur" : {
            "table" : "search_api_db_default_node_index_field_auteur",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_thematique" : {
            "table" : "search_api_db_default_node_index_field_thematique",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_soustitre" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_collection" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_collection",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_langue" : {
            "table" : "search_api_db_default_node_index_field_langue",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_sommaire" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_date" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_nb_page" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_nb_page",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_couleur" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "0.5"
          },
          "field_type_reliure" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "0.5"
          },
          "field_partenaire" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "0.5"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
