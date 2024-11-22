<!-- *************************************** -->
## (1). Understand the Basics of JSON :---

### Before diving into ArduinoJson, it's helpful to have a basic understanding of what JSON (JavaScript Object Notation) is and how it works:
* JSON is a lightweight data-interchange format used to store and transmit data.
* It consists of key-value pairs (similar to objects in JavaScript).
* Example:
```ino
{
  "name": "John",
  "age": 30,
  "isStudent": false
}
```

<!-- *************************************** -->

## (2). Learn to Create a Simple JSON Document :---
``` cpp
#include <ArduinoJson.h> /* Add "ArduinoJson" library. */

DynamicJsonDocument doc(1024); /* Allocate memory for the document */*

doc["name"] = "Araham";
doc["age"] = 23;
```

<!-- *************************************** -->

## (3). Add Key-Value Pairs to the JSON Document :---

### Explore adding different data types (strings, integers, booleans, arrays, and objects) to the JSON document:

+ Strings: doc["name"] = "John";
+ Integers: doc["age"] = 30;
+ Booleans: doc["isStudent"] = true;

<!-- *************************************** -->

## (4). Serialize JSON Document :---

### Learn how to serialize (convert) the JSON document into a string for transmission or storage:
```cpp
String output; /* creating a variabe namely "output" */
serializeJson(doc, output); /* converting json-document(doc) into string(output). */
Serial.println(output); /* printing the Serialize JSON String. */
```

<!-- *************************************** -->

## (5). Parse JSON from a String :---

### Learn how to parse JSON data received as a string into a JsonDocument:

```cpp
const char* jsonString = "{\"name\":\"Alice\", \"age\":25}";
DynamicJsonDocument doc(1024);
deserializeJson(doc, jsonString);

const char* name = doc["name"];
int age = doc["age"];
```