
#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"


#define Constante_Conversion 0.0008062545809919375      // resolucion del conversor
#define a                   36.077                    // Pendiente
#define b                   17.351                   // Intercepto


// Replace with your network credentials
const char* ssid = "PICAIORED";
const char* password = "P1c410r3d";

int analogPin = 34;

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);

String readAirSensor() {
  // Read temperature as Celsius (the default)
  float t = analogRead(analogPin)*Constante_Conversion;
  
        t = a*t -b;

    Serial.print(t);
    Serial.println("SLM");
    return String(t);
  
}


void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);
  analogSetWidth(12);                       // 12 bits de resolucion 
  analogSetAttenuation(ADC_11db);          //The input voltage of ADC will be attenuated, extending the range of measurement to up to approx. 2600 mV. (1V input = ADC reading of 1575).
  analogSetPinAttenuation (analogPin,ADC_11db); //analogSetPinAttenuation(pin, attenuation)
  
  // Initialize SPIFFS
  if(!SPIFFS.begin()){
    Serial.println("An Error has occurred while mounting SPIFFS");
    return;
  }

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

  // Route for root / web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html");
  });
  server.on("/airFlow", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readAirSensor().c_str());
  });


  // Start server
  server.begin();
}
 
void loop(){
  
}
