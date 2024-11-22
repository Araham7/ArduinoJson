/* 
*
* Convert(parse) JSON data received as a string into a JsonDocument.
*
 */

#include <ArduinoJson.h>

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Example JSON data received as a string
  String jsonData = "{\"temperature\":25.5,\"humidity\":60,\"status\":\"ok\"}";

  // Create a DynamicJsonDocument to hold the parsed JSON
  // Adjust the size based on your JSON structure
  DynamicJsonDocument doc(200);

  // Parse the JSON data
  DeserializationError error = deserializeJson(doc, jsonData);

  // Check if parsing was successful
  if (error) {
    Serial.print(F("Failed to parse JSON: "));
    Serial.println(error.f_str());
    return;
  }

  // Extract values from the JsonDocument
  float temperature = doc["temperature"];
  int humidity = doc["humidity"];
  const char* status = doc["status"];

  // Print the extracted values to the serial monitor
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity: ");
  Serial.println(humidity);
  Serial.print("Status: ");
  Serial.println(status);
}

void loop() {
  // No actions required in the loop
}