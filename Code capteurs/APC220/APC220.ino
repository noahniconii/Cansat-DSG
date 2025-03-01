/*
  Modified on March 09, 2021
  Modified by MohammedDamirchi from https://github.com/PaulStoffregen/SoftwareSerial
  Home
*/


#include <SoftwareSerial.h>

SoftwareSerial mySerial(4, 5); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

void loop() { // run over and over
//  if (mySerial.available()) {n        //pc vers arduino
//    Serial.write(mySerial.read());
//  }
//  if (Serial.available()) {            //arduino vers pc
//    mySerial.write(Serial.read());
//  }
 mySerial.write("CAN-85 connected successfully - Ceci est un Cansat, nous sommes pacifiques // This is a Cansat, we're friendly \n");
 delay(2000);
}
