/*
*

*** The code below will print the JSON data every 300 milliseconds :---

OUTPUT :---

{
  "day": "Monday",
  "temperature": 21,
  "humidity": 53
}

*
*/

#include <ArduinoJson.h> // Include the ArduinoJson library for JSON handling

int temperature = 21; // Create and store the temperature value
int humidity = 53;    // Create and store the humidity value

void setup() {
  Serial.begin(9600); // Initialize Serial communication at 9600 baud rate
}

void loop() {
  // Specify the size of the JSON document's memory allocation
  DynamicJsonDocument doc(256); // Allocate a JSON document with 256 bytes

  // Add a string key-value pair to the JSON document
  doc["day"] = "Monday";

  // Add integer key-value pairs to the JSON document
  doc["temperature"] = temperature;
  doc["humidity"] = humidity;

  // Serialize the JSON document in a pretty format and send it to Serial
  serializeJsonPretty(doc, Serial);
  Serial.println(); // Print a new line for better readability

  delay(300); // Wait for 300 milliseconds before repeating the loop
}

