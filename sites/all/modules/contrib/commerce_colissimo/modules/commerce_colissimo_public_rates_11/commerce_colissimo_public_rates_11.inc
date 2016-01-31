<?php

/*
 * @file
 * Defines commerce_colissimo rates for "public" colissimo rates table
 */

/**
 * Build an array of rates based on Colissimo recommandé OM1 price table
 * @return array
 *  The array has the following form:
 *  [0] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 *  [1] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 * ...
 */
function commerce_colissimo_public_rates_11_om1_recommande() {
  $rates = array(
    array(
      'weight' => 0.5,
      'reco' => array(
        5000 => 1095,
        20000 => 1185,
        40000 => 1305,
        60000 => 1425,
        80000 => 1545,
        ),
      ),
    array(
      'weight' => 1,
      'reco' => array(
        5000 => 1520,
        20000 => 1610,
        40000 => 1730,
        60000 => 1850,
        80000 => 1970,
        ),
      ),
    array(
      'weight' => 2,
      'reco' => array(
        5000 => 1985,
        20000 => 2075,
        40000 => 2195,
        60000 => 2315,
        80000 => 2435,
        ),
      ),
    array(
      'weight' => 3,
      'reco' => array(
        5000 => 2450,
        20000 => 2540,
        40000 => 2660,
        60000 => 2780,
        80000 => 2900,
        ),
      ),
    array(
      'weight' => 4,
      'reco' => array(
        5000 => 2915,
        20000 => 3005,
        40000 => 3125,
        60000 => 3245,
        80000 => 3365,
        ),
      ),
    array(
      'weight' => 5,
      'reco' => array(
        5000 => 3380,
        20000 => 3470,
        40000 => 3590,
        60000 => 3710,
        80000 => 3830,
        ),
      ),
    array(
      'weight' => 6,
      'reco' => array(
        5000 => 3845,
        20000 => 3935,
        40000 => 4055,
        60000 => 4175,
        80000 => 4295,
        ),
      ),
    array(
      'weight' => 7,
      'reco' => array(
        5000 => 4310,
        20000 => 4400,
        40000 => 4520,
        60000 => 4640,
        80000 => 4760,
        ),
      ),
    array(
      'weight' => 8,
      'reco' => array(
        5000 => 4775,
        20000 => 4865,
        40000 => 4985,
        60000 => 5105,
        80000 => 5225,
        ),
      ),
    array(
      'weight' => 9,
      'reco' => array(
        5000 => 5240,
        20000 => 5330,
        40000 => 5450,
        60000 => 5570,
        80000 => 5690,
        ),
      ),
    array(
      'weight' => 10,
      'reco' => array(
        5000 => 5705,
        20000 => 5795,
        40000 => 5915,
        60000 => 6035,
        80000 => 6155,
        ),
      ),
    array(
      'weight' => 15,
      'reco' => array(
        5000 => 8025,
        20000 => 8115,
        40000 => 8235,
        60000 => 8355,
        80000 => 8475,
        ),
      ),
    array(
      'weight' => 20,
      'reco' => array(
        5000 => 10345,
        20000 => 10435,
        40000 => 10555,
        60000 => 10675,
        80000 => 10795,
        ),
      ),
    array(
      'weight' => 25,
      'reco' => array(
        5000 => 12665,
        20000 => 12755,
        40000 => 12875,
        60000 => 12995,
        80000 => 13115,
        ),
      ),
    array(
      'weight' => 30,
      'reco' => array(
        5000 => 14985,
        20000 => 15075,
        40000 => 15195,
        60000 => 15315,
        80000 => 15435,
        ),
      ),
  );

  return $rates;
}

function commerce_colissimo_public_rates_11_om1_recommande_recommendation_levels() {
  $reco_level = array(
    "R1" => 5000,
    "R2" => 20000,
    "R3" => 40000,
    "R4" => 60000,
    "R5" => 80000
  );

  return $reco_level;
}
/**
 * Build an array of rates based on Colissimo recommandé OM2 price table
 * @return array
 *  The array has the following form:
 *  [0] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 *  [1] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 * ...
 */
function commerce_colissimo_public_rates_11_om2_recommande() {
  $rates = array(
    array(
      'weight' => 0.5,
      'reco' => array(
        5000 => 1260,
        20000 => 1350,
        40000 => 1470,
        60000 => 1590,
        80000 => 1710,
        ),
      ),
    array(
      'weight' => 1,
      'reco' => array(
        5000 => 1770,
        20000 => 1860,
        40000 => 1980,
        60000 => 2100,
        80000 => 2220,
        ),
      ),
    array(
      'weight' => 2,
      'reco' => array(
        5000 => 2930,
        20000 => 3020,
        40000 => 3140,
        60000 => 3260,
        80000 => 3380,
        ),
      ),
    array(
      'weight' => 3,
      'reco' => array(
        5000 => 4090,
        20000 => 4180,
        40000 => 4300,
        60000 => 4420,
        80000 => 4540,
        ),
      ),
    array(
      'weight' => 4,
      'reco' => array(
        5000 => 5250,
        20000 => 5340,
        40000 => 5460,
        60000 => 5580,
        80000 => 5700,
        ),
      ),
    array(
      'weight' => 5,
      'reco' => array(
        5000 => 6410,
        20000 => 6500,
        40000 => 6620,
        60000 => 6740,
        80000 => 6860,
        ),
      ),
    array(
      'weight' => 6,
      'reco' => array(
        5000 => 7570,
        20000 => 7660,
        40000 => 7780,
        60000 => 7900,
        80000 => 8020,
        ),
      ),
    array(
      'weight' => 7,
      'reco' => array(
        5000 => 8730,
        20000 => 8820,
        40000 => 8940,
        60000 => 9060,
        80000 => 9180,
        ),
      ),
    array(
      'weight' => 8,
      'reco' => array(
        5000 => 9890,
        20000 => 9980,
        40000 => 10100,
        60000 => 10220,
        80000 => 10340,
        ),
      ),
    array(
      'weight' => 9,
      'reco' => array(
        5000 => 11050,
        20000 => 11140,
        40000 => 11260,
        60000 => 11380,
        80000 => 11500,
        ),
      ),
    array(
      'weight' => 10,
      'reco' => array(
        5000 => 12210,
        20000 => 12300,
        40000 => 12420,
        60000 => 12540,
        80000 => 12660,
        ),
      ),
    array(
      'weight' => 15,
      'reco' => array(
        5000 => 18010,
        20000 => 18100,
        40000 => 18220,
        60000 => 18340,
        80000 => 18460,
        ),
      ),
    array(
      'weight' => 20,
      'reco' => array(
        5000 => 23810,
        20000 => 23900,
        40000 => 24020,
        60000 => 24240,
        80000 => 24260,
        ),
      ),
    array(
      'weight' => 25,
      'reco' => array(
        5000 => 29610,
        20000 => 29700,
        40000 => 29820,
        60000 => 29940,
        80000 => 30060,
        ),
      ),
    array(
      'weight' => 30,
      'reco' => array(
        5000 => 35110,
        20000 => 35500,
        40000 => 35620,
        60000 => 35740,
        80000 => 35860,
        ),
      ),
  );
  return $rates;
}

function commerce_colissimo_public_rates_11_om2_recommande_recommendation_levels() {
  $reco_level = array(
    "R1" => 5000,
    "R2" => 20000,
    "R3" => 40000,
    "R4" => 60000,
    "R5" => 80000
  );

  return $reco_level;
}
/**
 * Build an array of rates based on Colissimo recommandé Metropole price table
 * @return array
 *  The array has the following form:
 *  [0] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 *  [1] =>
 *    [weight] => weight limit,
 *    [reco] =>
 *      [order's amount limit] => price,
 *      [order's amount limit] => price,
 * ...
 */
function commerce_colissimo_public_rates_11_france_metropole_recommande() {
  $rates = array(
    array(
      'weight' => 0.5,
      'reco' => array(
        5000 => 810,
        20000 => 900,
        40000 => 1020,
        60000 => 1140,
        80000 => 1260,
        ),
      ),
    array(
      'weight' => 1,
      'reco' => array(
        5000 => 945,
        20000 => 1035,
        40000 => 1155,
        60000 => 1275,
        80000 => 1395,
        ),
      ),
    array(
      'weight' => 2,
      'reco' => array(
        5000 => 1045,
        20000 => 1135,
        40000 => 1255,
        60000 => 1375,
        80000 => 1495,
        ),
      ),
    array(
      'weight' => 3,
      'reco' => array(
        5000 => 1145,
        20000 => 1235,
        40000 => 1355,
        60000 => 1475,
        80000 => 1595,
        ),
      ),
    array(
      'weight' => 5,
      'reco' => array(
        5000 => 1345,
        20000 => 1435,
        40000 => 1555,
        60000 => 1675,
        80000 => 1795,
        ),
      ),
    array(
      'weight' => 7,
      'reco' => array(
        5000 => 1545,
        20000 => 1635,
        40000 => 1755,
        60000 => 1875,
        80000 => 1995,
        ),
      ),
    array(
      'weight' => 10,
      'reco' => array(
        5000 => 1845,
        20000 => 1935,
        40000 => 2055,
        60000 => 2175,
        80000 => 2295,
        ),
      ),
    array(
      'weight' => 15,
      'reco' => array(
        5000 => 2070,
        20000 => 2160,
        40000 => 2280,
        60000 => 2400,
        80000 => 2520,
        ),
      ),
    array(
      'weight' => 30,
      'reco' => array(
        5000 => 2740,
        20000 => 2830,
        40000 => 2950,
        60000 => 3070,
        80000 => 3190,
        ),
      ),
  );

  return $rates;
}

function commerce_colissimo_public_rates_11_france_metropole_recommande_recommendation_levels() {
  $reco_level = array(
    "R1" => 5000,
    "R2" => 20000,
    "R3" => 40000,
    "R4" => 60000,
    "R5" => 80000
  );

  return $reco_level;
}