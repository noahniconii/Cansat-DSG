#include "SPI.h"
#include "SD.h"

File myFile;

const int chipSelect = 4;    

void setup() {
   Serial.begin(9600);
   pinMode(SS, OUTPUT);

   while (!SD.begin(SPI_HALF_SPEED, chipSelect)) { Serial.println("initialization failed"); }
 
   myFile = SD.open("test.txt", FILE_WRITE);

   if (myFile) {
      Serial.println("Writing to test.txt");
      myFile.println("testing 1, 2, 3");
      myFile.close();
   }

   else { Serial.println("error opening test.txt"); }
 

   myFile = SD.open("test.txt");

   if (myFile) {
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
