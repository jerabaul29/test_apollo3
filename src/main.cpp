#include <Arduino.h>
#include "Embedded_Template_Library.h"
#include "etl/vector.h"

void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println(F("BOOTED"));

  etl::vector<int, 10> test_vec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto && elem : test_vec) {
    Serial.print(elem);
    Serial.println();
  }
}

void loop() {
}