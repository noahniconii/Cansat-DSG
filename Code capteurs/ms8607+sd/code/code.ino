#include <SD.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_MS8607.h>
#include <Adafruit_Sensor.h>

// Variables globales carte SD
const char* fileName = "mesures.txt";
File dataFile;

// Variables globales sensor
Adafruit_MS8607 ms8607;

// Fonctions carte SD => SETUP
void serial_setupConnection(int baudrate) {
  Serial.begin(baudrate);
}

void sd_setupCard(uint8_t pin) {
  Serial.println(F("Initialisation de la carte SD..."));
  while (!SD.begin(pin)) {
    Serial.println(F("Initialisation non aboutie ! Insérer une carte SD dans le module."));
    delay(1000);
  }
  Serial.println(F("Initialisation du module SD réussie."));
  delay(50);
}


void setup() {
  // bloc carte SD
  serial_setupConnection(9600);
  sd_setupCard(10);

  // bloc sensor
  if (!ms8607.begin()) {
    Serial.println(F("Failed to find MS8607 chip"));
    while (1) { delay(10); }
  }
  Serial.println(F("MS8607 Found!"));  
}

// Fonction carte SD => LOOP
void sd_writeData(String data) {
  dataFile = SD.open(fileName, FILE_WRITE);
  if (dataFile) {
    Serial.println(F("Ecriture dans le fichier ")); 
    dataFile.println(data);
    dataFile.close();
    Serial.println(F("Donnée écrite"));
    delay(50);
  }
  else {
    Serial.println(F("Erreur lors de l'ouverture du fichier ")); 
    delay(1000);
  }
}

void loop() {  
  delay(1000);
    sensors_event_t temp, pressure, humidity;
    ms8607.getEvent(&pressure, &temp, &humidity);
    Serial.print(F("Temp: "));Serial.print(temp.temperature); Serial.println(F(" °C"));
    Serial.print(F("Press: "));Serial.print(pressure.pressure); Serial.println(F(" hPa"));
    Serial.print(F("Humi: "));Serial.print(humidity.relative_humidity); Serial.println(F(" %rH"));

    sd_writeData((String("temp:") + String(temp.temperature) + String(" °C") + String("\n""press:") + String(pressure.pressure) + String(" hPa") + String("\n""humi:") + String(humidity.relative_humidity) + String(" %rH""\n")));
    delay(1000);

}
