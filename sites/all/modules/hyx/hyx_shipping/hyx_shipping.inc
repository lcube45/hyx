<?php

/*
 * @file
 * Defines rates for zone france
 *
 * Andorra,20 France,250 Monaco,492
 */
function hyx_tarif_zone_france() {
  $rates = array(
    array(
      'weight' => 1.99,
      'price' => 10,
    ),
    array(
      'weight' => 4.9,
      'price' => 425,
    ),
    array(
      'weight' => 9.9,
      'price' => 650,
    ),
    array(
      'weight' => 19.9,
      'price' => 925,
    ),
    array(
      'weight' => 29.9,
      'price' => 1325,
    ),
  );

  return $rates;
}

/*
 * @file
 * Defines rates for zone A
 *
 * Austria,40 Belgium,56 Denmark,208 Finland,246 Germany,276 Ireland,372 Italy,380 Luxembourg,442
 * Netherlands,578 Poland,616 Portugal,620 Spain,724 Sweden,752
 * Switzerland,756
 */
function hyx_tarif_zone_a() {
  $rates = array(
    array(
      'weight' => 0.49,
      'price' => 600,
    ),
    array(
      'weight' => 0.99,
      'price' => 700,
    ),
    array(
      'weight' => 1.99,
      'price' => 800,
    ),
    array(
      'weight' => 4.99,
      'price' => 1000,
    ),
    array(
      'weight' => 9.99,
      'price' => 1700,
    ),
    array(
      'weight' => 19.99,
      'price' => 2900,
    ),
    array(
      'weight' => 29.99,
      'price' => 4000,
    ),
  );

  return $rates;
}


/*
 * @file
 * Defines rates for zone B
 *
 * Algeria,12 Bosnia-Herzegovina,70 Bulgaria,100 Czech Republic,203
 * Estonia,233 Georgia,268 Hungary,348 Kazakhstan,398 Morocco,504
 * Romania,642 Russia,643 Slovakia,703 Slovenia,705 Tunisia,788 Türkiye,792
 */
function hyx_tarif_zone_b() {
  $rates = array(
    array(
      'weight' => 0.49,
      'price' => 800,
    ),
    array(
      'weight' => 0.99,
      'price' => 950,
    ),
    array(
      'weight' => 1.99,
      'price' => 1000,
    ),
    array(
      'weight' => 4.99,
      'price' => 1350,
    ),
    array(
      'weight' => 9.99,
      'price' => 2500,
    ),
    array(
      'weight' => 19.99,
      'price' => 4000,
    ),
    array(
      'weight' => 29.99,
      'price' => 10000,
    ),
  );

  return $rates;
}


/*
 * @file
 * Defines rates for zone C
 *
 * Argentina,32 Canada,124 Chile,152 China,156 Colombia,170 Costa Rica,188
 * Dominican Republic,214 Ecuador,218 El Salvador,222 Hong Kong,344 India,356
 * Israel,376 Jamaica,388 Japan,392 Korea, Republic of,410 Malta,470 Mauritius,480
 * Mexico,484 New Zealand,554 Nicaragua,558 Panama,591 Perú,604 Puerto Rico,630
 * Singapore,702 South Africa,710 Taiwan,158 Thailand,764 United Arab Emirates,784
 * United States,840 Uruguay,858 Venezuela,862
 */
function hyx_tarif_zone_c() {
  $rates = array(
    array(
      'weight' => 0.49,
      'price' => 1200,
    ),
    array(
      'weight' => 0.99,
      'price' => 1300,
    ),
    array(
      'weight' => 1.99,
      'price' => 1800,
    ),
    array(
      'weight' => 4.99,
      'price' => 2600,
    ),
    array(
      'weight' => 9.99,
      'price' => 6000,
    ),
    array(
      'weight' => 19.99,
      'price' => 10000,
    ),
    array(
      'weight' => 29.99,
      'price' => 25000,
    ),
  );

  return $rates;
}