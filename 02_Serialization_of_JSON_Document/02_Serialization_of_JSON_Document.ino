/*

*** (1). Serialize JSON : "Serialize JSON" means converting a JSON object (which is a structured data format, usually represented as key-value pairs) into a string that can be transmitted, saved, or processed.

(2).serialization : In the context of programming (like in the ArduinoJson library), serialization refers to the process of transforming a JSON data structure into a string that can be sent over a network, stored in a file, or displayed. This serialized string preserves the JSON format but is now represented as a simple text string.

*/

/* (3). serialization of JSON document : */

#include <ArduinoJson.h> // Include the ArduinoJson library to work with JSON documents

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
  /* code : */
  // Specify the size of the DynamicJsonDocument to store the JSON data
  DynamicJsonDocument doc(256); // 256 bytes of memory allocated for the JSON document

  // Add key-value pairs to the JSON document
  doc["day"] = "Monday"; // Add the key "day" with the value "Monday"
  doc["temperature"] = 21; // Add the key "temperature" with the value 21
  doc["humidity"] = 53; // Add the key "humidity" with the value 53

  // Serialize the JSON document into a string format
  String jsonString; // Declare a string-variable(i.e, "jsonString") to hold the serialized JSON data.
  serializeJson(doc, jsonString); // Serialize the JSON document into the jsonString variable.(Ye line json-document(i.e, 'doc') ko "Serialize"(i.e, String me conversion) kar ke string-variable(i.e, "jsonString") me store kardega.)

  // Print the serialized JSON string to the serial monitor
  Serial.println(jsonString); // Output the JSON string to the serial monitor

  delay(200); // Wait for 200 milliseconds before repeating the loop
}




