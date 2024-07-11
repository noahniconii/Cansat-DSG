//#include <SD.h>                                                                                           //Carte SD --> ajout des librairies nécessaires
//#include <SPI.h>                                                                                          //Carte SD --> ajout des librairies nécessaires
#include <Wire.h>                                                                                         //Carte SD et Capteur MS8607 --> ajout des librairies nécessaires
#include <Adafruit_MS8607.h>                                                                              //Capteur MS8607 --> ajout des librairies nécessaires
#include <Adafruit_Sensor.h>                                                                              //Capteur MS8607 --> ajout des librairies nécessaires
#include <SoftwareSerial.h>                                                                               //ANTENNE --> ajout des librairies nécessaires

SoftwareSerial mySerial(4, 5); // RX, TX                                                                  //ANTENNE --> définition des broches

#define NOTE_B0  31                                                                                       //BUZZER --> définition des notes
#define NOTE_C1  33                                                                                       //BUZZER --> définition des notes
#define NOTE_CS1 35                                                                                       //BUZZER --> définition des notes
#define NOTE_D1  37                                                                                       //BUZZER --> définition des notes
#define NOTE_DS1 39                                                                                       //BUZZER --> définition des notes
#define NOTE_E1  41                                                                                       //BUZZER --> définition des notes
#define NOTE_F1  44                                                                                       //BUZZER --> définition des notes
#define NOTE_FS1 46                                                                                       //BUZZER --> définition des notes
#define NOTE_G1  49                                                                                       //BUZZER --> définition des notes
#define NOTE_GS1 52                                                                                       //BUZZER --> définition des notes
#define NOTE_A1  55                                                                                       //BUZZER --> définition des notes
#define NOTE_AS1 58                                                                                       //BUZZER --> définition des notes
#define NOTE_B1  62                                                                                       //BUZZER --> définition des notes
#define NOTE_C2  65                                                                                       //BUZZER --> définition des notes
#define NOTE_CS2 69                                                                                       //BUZZER --> définition des notes
#define NOTE_D2  73                                                                                       //BUZZER --> définition des notes
#define NOTE_DS2 78                                                                                       //BUZZER --> définition des notes
#define NOTE_E2  82                                                                                       //BUZZER --> définition des notes
#define NOTE_F2  87                                                                                       //BUZZER --> définition des notes
#define NOTE_FS2 93                                                                                       //BUZZER --> définition des notes
#define NOTE_G2  98                                                                                       //BUZZER --> définition des notes
#define NOTE_GS2 104                                                                                      //BUZZER --> définition des notes
#define NOTE_A2  110                                                                                      //BUZZER --> définition des notes
#define NOTE_AS2 117                                                                                      //BUZZER --> définition des notes
#define NOTE_B2  123                                                                                      //BUZZER --> définition des notes
#define NOTE_C3  131                                                                                      //BUZZER --> définition des notes
#define NOTE_CS3 139                                                                                      //BUZZER --> définition des notes
#define NOTE_D3  147                                                                                      //BUZZER --> définition des notes
#define NOTE_DS3 156                                                                                      //BUZZER --> définition des notes
#define NOTE_E3  165                                                                                      //BUZZER --> définition des notes
#define NOTE_F3  175                                                                                      //BUZZER --> définition des notes
#define NOTE_FS3 185                                                                                      //BUZZER --> définition des notes
#define NOTE_G3  196                                                                                      //BUZZER --> définition des notes
#define NOTE_GS3 208                                                                                      //BUZZER --> définition des notes
#define NOTE_A3  220                                                                                      //BUZZER --> définition des notes
#define NOTE_AS3 233                                                                                      //BUZZER --> définition des notes
#define NOTE_B3  247                                                                                      //BUZZER --> définition des notes
#define NOTE_C4  262                                                                                      //BUZZER --> définition des notes
#define NOTE_CS4 277                                                                                      //BUZZER --> définition des notes
#define NOTE_D4  294                                                                                      //BUZZER --> définition des notes
#define NOTE_DS4 311                                                                                      //BUZZER --> définition des notes
#define NOTE_E4  330                                                                                      //BUZZER --> définition des notes
#define NOTE_F4  349                                                                                      //BUZZER --> définition des notes
#define NOTE_FS4 370                                                                                      //BUZZER --> définition des notes
#define NOTE_G4  392                                                                                      //BUZZER --> définition des notes
#define NOTE_GS4 415                                                                                      //BUZZER --> définition des notes
#define NOTE_A4  440                                                                                      //BUZZER --> définition des notes
#define NOTE_AS4 466                                                                                      //BUZZER --> définition des notes
#define NOTE_B4  494                                                                                      //BUZZER --> définition des notes
#define NOTE_C5  523                                                                                      //BUZZER --> définition des notes
#define NOTE_CS5 554                                                                                      //BUZZER --> définition des notes
#define NOTE_D5  587                                                                                      //BUZZER --> définition des notes
#define NOTE_DS5 622                                                                                      //BUZZER --> définition des notes
#define NOTE_E5  659                                                                                      //BUZZER --> définition des notes
#define NOTE_F5  698                                                                                      //BUZZER --> définition des notes
#define NOTE_FS5 740                                                                                      //BUZZER --> définition des notes
#define NOTE_G5  784                                                                                      //BUZZER --> définition des notes
#define NOTE_GS5 831                                                                                      //BUZZER --> définition des notes
#define NOTE_A5  880                                                                                      //BUZZER --> définition des notes
#define NOTE_AS5 932                                                                                      //BUZZER --> définition des notes
#define NOTE_B5  988                                                                                      //BUZZER --> définition des notes
#define NOTE_C6  1047                                                                                     //BUZZER --> définition des notes
#define NOTE_CS6 1109                                                                                     //BUZZER --> définition des notes
#define NOTE_D6  1175                                                                                     //BUZZER --> définition des notes
#define NOTE_DS6 1245                                                                                     //BUZZER --> définition des notes
#define NOTE_E6  1319                                                                                     //BUZZER --> définition des notes
#define NOTE_F6  1397                                                                                     //BUZZER --> définition des notes
#define NOTE_FS6 1480                                                                                     //BUZZER --> définition des notes
#define NOTE_G6  1568                                                                                     //BUZZER --> définition des notes
#define NOTE_GS6 1661                                                                                     //BUZZER --> définition des notes
#define NOTE_A6  1760                                                                                     //BUZZER --> définition des notes
#define NOTE_AS6 1865                                                                                     //BUZZER --> définition des notes
#define NOTE_B6  1976                                                                                     //BUZZER --> définition des notes
#define NOTE_C7  2093                                                                                     //BUZZER --> définition des notes
#define NOTE_CS7 2217                                                                                     //BUZZER --> définition des notes
#define NOTE_D7  2349                                                                                     //BUZZER --> définition des notes
#define NOTE_DS7 2489                                                                                     //BUZZER --> définition des notes
#define NOTE_E7  2637                                                                                     //BUZZER --> définition des notes
#define NOTE_F7  2794                                                                                     //BUZZER --> définition des notes
#define NOTE_FS7 2960                                                                                     //BUZZER --> définition des notes
#define NOTE_G7  3136                                                                                     //BUZZER --> définition des notes
#define NOTE_GS7 3322                                                                                     //BUZZER --> définition des notes
#define NOTE_A7  3520                                                                                     //BUZZER --> définition des notes
#define NOTE_AS7 3729                                                                                     //BUZZER --> définition des notes
#define NOTE_B7  3951                                                                                     //BUZZER --> définition des notes
#define NOTE_C8  4186                                                                                     //BUZZER --> définition des notes
#define NOTE_CS8 4435                                                                                     //BUZZER --> définition des notes
#define NOTE_D8  4699                                                                                     //BUZZER --> définition des notes
#define NOTE_DS8 4978                                                                                     //BUZZER --> définition des notes
#define REST      0                                                                                       //BUZZER --> définition des notes
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int tempo = 108;                                                                                          //BUZZER --> vitesse de la musique
int buzzer = 6;                                                                                           //BUZZER --> pin D6 sur le shield grove

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!

int melody[] = {                                                                                          //BUZZER --> durée des notes
  NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8,//1                                                                  //BUZZER --> durée des notes
  NOTE_F5,2, NOTE_C6,2,                                                                                   //BUZZER --> durée des notes
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER --> durée des notes
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER --> durée des notes
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,                          //BUZZER --> durée des notes
  NOTE_F5,2, NOTE_C6,2,                                                                                   //BUZZER --> durée des notes
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER --> durée des notes

  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4, //8                                             //BUZZER --> durée des notes
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16,                                   //BUZZER --> durée des notes
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER --> durée des notes
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C5,-8, NOTE_C5,16,                //BUZZER --> durée des notes
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER --> durée des notes

  NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,//13                                               //BUZZER --> durée des notes
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER --> durée des notes
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C6,-8, NOTE_C6,16,                //BUZZER --> durée des notes
  NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,             //BUZZER --> durée des notes
  NOTE_C6,1                                                                                               //BUZZER --> durée des notes

};
int notes = sizeof(melody) / sizeof(melody[0]) / 2;                                                       //BUZZER --> définition de la mélodie
int wholenote = (60000 * 4) / tempo;                                                                      //BUZZER --> définition du tempo
int divider = 0, noteDuration = 0;                                                                        //BUZZER --> définition de la durée
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////// Initialisation des modules //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// Variables globales carte SD
//const char* fileName = "mesures.txt";                                                                             //Carte SD --> création du fichier d'enregistrement
//File dataFile;                                                                                                    //Carte SD --> création du fichier d'enregistrement
// Variables globales sensor
Adafruit_MS8607 ms8607;                                                                                           //Capteur MS8607 --> initialisation du capteur, lecture de la librairie
//// Fonctions carte SD => SETUP
//void serial_setupConnection(int baudrate) {                                                                       //Carte SD --> initialisation du module d'écriture SD
//  Serial.begin(baudrate);                                                                                         //Carte SD --> initialisation du module d'écriture SD
//}
//void sd_setupCard(uint8_t pin) {                                                                                  //Carte SD 
//  Serial.println(F("Initialisation de la carte SD..."));                                                          //Carte SD --> recherche d'une carte SD
//  while (!SD.begin(pin)) {                                                                                        //Carte SD --> pendant la recherche de carte SD,
//    Serial.println(F("Initialisation non aboutie ! Insérer une carte SD dans le module."));                       //Carte SD --> on signale à l'utilisateur que aucune carte SD n'est détectée
//    delay(1000);                                                                                                  //Carte SD
//  }                                                                                                               //Carte SD
//  Serial.println(F("Initialisation du module SD réussie."));                                                      //Carte SD --> carte SD détectée
//  delay(50);                                                                                                      //Carte SD -->
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////// Vérification des modules /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);                                                                                             //ANTENNE --> initialisation de l'antenne et définition du port de communication
  while (!Serial) {                                                                                               //ANTENNE --> initialisation de l'antenne
    ;                                                                                                             //ANTENNE
  }                                                                                                               //ANTENNE
  mySerial.begin(9600);                                                                                           //ANTENNE --> initialisation de l'antenne et définition du port de communication

//  serial_setupConnection(9600);                                                                                   //Carte SD --> initialisation du module d'écriture SD
//  sd_setupCard(10);                                                                                               //Carte SD --> initialisation du module d'écriture SD

  if (!ms8607.begin()) {                                                                                          //Capteur MS8607 --> recherche du capteur
    Serial.println(F("Capteur MS8607 introuvable, vérifier les connections"));                                    //Capteur MS8607 --> signaler à l'utilisateur que le capteur est introuvable
    while (1) { delay(10); }                                                                                      //Capteur MS8607 --> initialisation du capteur
  }                                                                                                               //Capteur MS8607
  Serial.println(F("Capteur MS8607 trouvé"));                                                                     //Capteur MS8607 --> signaler à l'utilisateur que le capteur est détecté
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////// Fonction propre au module d'enregistre SD => LOOP /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void sd_writeData(String data) {                                                                                  //Carte SD
//  dataFile = SD.open(fileName, FILE_WRITE);                                                                       //Carte SD --> ouverture du fichier
//  if (dataFile) {                                                                                                 //Carte SD --> vérification de l'ouverture du fichier
//    Serial.println(F("Ecriture dans le fichier "));                                                               //Carte SD
//    dataFile.println(data);                                                                                       //Carte SD --> écriture des données du capteur sur la carte
//    dataFile.close();                                                                                             //Carte SD --> fermeture du fichier
//    Serial.println(F("Donnée écrite"));                                                                           //Carte SD
//    delay(50);                                                                                                    //Carte SD
//  }                                                                                                               //Carte SD
//  else {                                                                                                          //Carte SD --> si le fichier n'est pas ouvert
//    Serial.println(F("Erreur lors de l'ouverture du fichier "));                                                  //Carte SD --> le signaler à l'utilisateur
//    delay(1000);                                                                                                  //Carte SD
//  }                                                                                                               //Carte SD
//}                                                                                                                 //Carte SD
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////// Fonction loop, lecture en boucle /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
 for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {                                          //BUZZER --> Lecture de la musique
    divider = melody[thisNote + 1];                                                                               //BUZZER --> Lecture de la musique
    if (divider > 0) {                                                                                            //BUZZER --> Lecture de la musique
      noteDuration = (wholenote) / divider;                                                                       //BUZZER --> Lecture de la musique
    } else if (divider < 0) {                                                                                     //BUZZER --> Lecture de la musique
      noteDuration = (wholenote) / abs(divider);                                                                  //BUZZER --> Lecture de la musique
      noteDuration *= 1.5;                                                                                        //BUZZER --> Lecture de la musique
    }                                                                                                             //BUZZER
    tone(buzzer, melody[thisNote], noteDuration*0.9);                                                             //BUZZER --> Lecture de la musique
    delay(noteDuration);                                                                                          //BUZZER --> Lecture de la musique
    noTone(buzzer);                                                                                               //BUZZER --> Lecture de la musique
    mySerial.write("CAN-85 connected successfully - // This is a Cansat, we're friendly \n");//ANTENNE --> envoie du message au module répecteur sur le PC
    sensors_event_t temp, pressure, humidity;                                                                     //Capteur MS8607 --> acquisition des données
    ms8607.getEvent(&pressure, &temp, &humidity);                                                                 //Capteur MS8607 --> acquisition des données
//    Serial.print(F("Temp: "));Serial.print(temp.temperature); Serial.println(F(" °C"));                           //Capteur MS8607 --> acquisition des données
//    Serial.print(F("Press: "));Serial.print(pressure.pressure); Serial.println(F(" hPa"));                        //Capteur MS8607 --> acquisition des données
//    Serial.print(F("Humi: "));Serial.print(humidity.relative_humidity); Serial.println(F(" %rH"));                //Capteur MS8607 --> acquisition des données
//  sd_writeData((String("temp:") + String(temp.temperature) + String(" °C") + String("\n""press:") + String(pressure.pressure) + String(" hPa") + String("\n""humi:") + String(humidity.relative_humidity) + String(" %rH""\n"))); //Capteur MS8607 et Carte SD --> écriture des données sur la carte
// delay(1000);
// delay(2000);
  }
}
