#include <SD.h>
#include <SPI.h>

const char* fileName = "log_1_25.txt";
File dataFile;

void serial_setupConnection(int baudrate) {
  Serial.begin(baudrate);
  while (!Serial) {
    Serial.println("En attente de l'ouverture du port série...");
    delay(1000);
  }
  Serial.println("Port série activé. Baudrate: " + String(baudrate));
  delay(50);
}

void sd_setupCard(uint8_t pin) {
  Serial.println("Initialisation de la carte SD...");
  while (!SD.begin(pin)) {
    Serial.println("Initialisation non aboutie ! Insérer une carte SD dans le module.");
    delay(1000);
  }
  Serial.println("Initialisation du module SD réussie.");
  delay(50);
}

void sd_writeData(String data) {
  dataFile = SD.open(fileName, FILE_WRITE);
  if (dataFile) {
    Serial.println("Ecriture dans le fichier " + String(fileName));
    dataFile.println(data);
    dataFile.close();
    Serial.println("Donnée écrite.");
    delay(50);
  }
  else {
    Serial.println("Erreur lors de l'ouverture du fichier " + String(fileName));
    delay(1000);
  }
}


void setup() {
  serial_setupConnection(9600);
  sd_setupCard(4);
}

void loop() {
  sd_writeData((String("Donnée1") + String(";") + String("42")));
  delay(1000*1);
}
