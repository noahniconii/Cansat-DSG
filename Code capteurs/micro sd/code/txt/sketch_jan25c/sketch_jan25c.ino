#include "SPI.h"
#include "SD.h"

File myFile;

const int chipSelect = 4;    

void setup() {
   Serial.begin(9600);
   pinMode(SS, OUTPUT);

   while (!SD.begin(SPI_HALF_SPEED, chipSelect)) { Serial.println("initialization failed"); }
 
   myFile = SD.open("test.txt");

   if (myFile) {
      Serial.print(myFile.size());
      Serial.println(" Kb");
      Serial.println("\ntest.txt:");
      while (myFile.available()) {
         Serial.write(myFile.read());
      }
      myFile.close();
   }

   else { Serial.println("error opening test.txt"); }
}

void loop() {
}
