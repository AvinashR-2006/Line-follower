#include <Arduino.h>

// Public demo firmware only.
// The full competition control logic is intentionally not included here.

const int SENSOR_PINS[] = {32, 18, 19, 21, 22};
const int NUM_SENSORS = sizeof(SENSOR_PINS) / sizeof(SENSOR_PINS[0]);

void printSensorRow() {
  for (int i = 0; i < NUM_SENSORS; i++) {
    const int value = digitalRead(SENSOR_PINS[i]);
    Serial.print(value);
    if (i < NUM_SENSORS - 1) {
      Serial.print("  ");
    }
  }
  Serial.println();
}

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < NUM_SENSORS; i++) {
    pinMode(SENSOR_PINS[i], INPUT);
  }

  Serial.println("Line follower public demo");
  Serial.println("Format: S1 S2 S3 S4 S5");
  Serial.println("HIGH = black, LOW = white");
}

void loop() {
  printSensorRow();
  delay(200);
}
