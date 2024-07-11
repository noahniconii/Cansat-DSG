#include <SoftwareSerial.h>                                                                            //ANTENNE
                                                                                                       //ANTENNE
SoftwareSerial mySerial(4, 5); // RX, TX                                                               //ANTENNE
#define NOTE_B0  31                                                                                       //BUZZER
#define NOTE_C1  33                                                                                       //BUZZER
#define NOTE_CS1 35                                                                                       //BUZZER
#define NOTE_D1  37                                                                                       //BUZZER
#define NOTE_DS1 39                                                                                       //BUZZER
#define NOTE_E1  41                                                                                       //BUZZER
#define NOTE_F1  44                                                                                       //BUZZER
#define NOTE_FS1 46                                                                                       //BUZZER
#define NOTE_G1  49                                                                                       //BUZZER
#define NOTE_GS1 52                                                                                       //BUZZER
#define NOTE_A1  55                                                                                       //BUZZER
#define NOTE_AS1 58                                                                                       //BUZZER
#define NOTE_B1  62                                                                                       //BUZZER
#define NOTE_C2  65                                                                                       //BUZZER
#define NOTE_CS2 69                                                                                       //BUZZER
#define NOTE_D2  73                                                                                       //BUZZER
#define NOTE_DS2 78                                                                                       //BUZZER
#define NOTE_E2  82                                                                                       //BUZZER
#define NOTE_F2  87                                                                                       //BUZZER
#define NOTE_FS2 93                                                                                       //BUZZER
#define NOTE_G2  98                                                                                       //BUZZER
#define NOTE_GS2 104                                                                                      //BUZZER
#define NOTE_A2  110                                                                                      //BUZZER
#define NOTE_AS2 117                                                                                      //BUZZER
#define NOTE_B2  123                                                                                      //BUZZER
#define NOTE_C3  131                                                                                      //BUZZER
#define NOTE_CS3 139                                                                                      //BUZZER
#define NOTE_D3  147                                                                                      //BUZZER
#define NOTE_DS3 156                                                                                      //BUZZER
#define NOTE_E3  165                                                                                      //BUZZER
#define NOTE_F3  175                                                                                      //BUZZER
#define NOTE_FS3 185                                                                                      //BUZZER
#define NOTE_G3  196                                                                                      //BUZZER
#define NOTE_GS3 208                                                                                      //BUZZER
#define NOTE_A3  220                                                                                      //BUZZER
#define NOTE_AS3 233                                                                                      //BUZZER
#define NOTE_B3  247                                                                                      //BUZZER
#define NOTE_C4  262                                                                                      //BUZZER
#define NOTE_CS4 277                                                                                      //BUZZER
#define NOTE_D4  294                                                                                      //BUZZER
#define NOTE_DS4 311                                                                                      //BUZZER
#define NOTE_E4  330                                                                                      //BUZZER
#define NOTE_F4  349                                                                                      //BUZZER
#define NOTE_FS4 370                                                                                      //BUZZER
#define NOTE_G4  392                                                                                      //BUZZER
#define NOTE_GS4 415                                                                                      //BUZZER
#define NOTE_A4  440                                                                                      //BUZZER
#define NOTE_AS4 466                                                                                      //BUZZER
#define NOTE_B4  494                                                                                      //BUZZER
#define NOTE_C5  523                                                                                      //BUZZER
#define NOTE_CS5 554                                                                                      //BUZZER
#define NOTE_D5  587                                                                                      //BUZZER
#define NOTE_DS5 622                                                                                      //BUZZER
#define NOTE_E5  659                                                                                      //BUZZER
#define NOTE_F5  698                                                                                      //BUZZER
#define NOTE_FS5 740                                                                                      //BUZZER
#define NOTE_G5  784                                                                                      //BUZZER
#define NOTE_GS5 831                                                                                      //BUZZER
#define NOTE_A5  880                                                                                      //BUZZER
#define NOTE_AS5 932                                                                                      //BUZZER
#define NOTE_B5  988                                                                                      //BUZZER
#define NOTE_C6  1047                                                                                     //BUZZER
#define NOTE_CS6 1109                                                                                     //BUZZER
#define NOTE_D6  1175                                                                                     //BUZZER
#define NOTE_DS6 1245                                                                                     //BUZZER
#define NOTE_E6  1319                                                                                     //BUZZER
#define NOTE_F6  1397                                                                                     //BUZZER
#define NOTE_FS6 1480                                                                                     //BUZZER
#define NOTE_G6  1568                                                                                     //BUZZER
#define NOTE_GS6 1661                                                                                     //BUZZER
#define NOTE_A6  1760                                                                                     //BUZZER
#define NOTE_AS6 1865                                                                                     //BUZZER
#define NOTE_B6  1976                                                                                     //BUZZER
#define NOTE_C7  2093                                                                                     //BUZZER
#define NOTE_CS7 2217                                                                                     //BUZZER
#define NOTE_D7  2349                                                                                     //BUZZER
#define NOTE_DS7 2489                                                                                     //BUZZER
#define NOTE_E7  2637                                                                                     //BUZZER
#define NOTE_F7  2794                                                                                     //BUZZER
#define NOTE_FS7 2960                                                                                     //BUZZER
#define NOTE_G7  3136                                                                                     //BUZZER
#define NOTE_GS7 3322                                                                                     //BUZZER
#define NOTE_A7  3520                                                                                     //BUZZER
#define NOTE_AS7 3729                                                                                     //BUZZER
#define NOTE_B7  3951                                                                                     //BUZZER
#define NOTE_C8  4186                                                                                     //BUZZER
#define NOTE_CS8 4435                                                                                     //BUZZER
#define NOTE_D8  4699                                                                                     //BUZZER
#define NOTE_DS8 4978                                                                                     //BUZZER
#define REST      0                                                                                       //BUZZER
                                                                                                          //BUZZER
                                                                                                          //BUZZER
                                                                                                          //BUZZER
int tempo = 108;                                                                                          //BUZZER - Vitesse de la musique
int buzzer = 6;                                                                                           //BUZZER - Pin D6 sur le shield grove
                                                                                                          //BUZZER
// notes of the moledy followed by the duration.                                                          //BUZZER
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on                                        //BUZZER
// !!negative numbers are used to represent dotted notes,                                                 //BUZZER
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!                             //BUZZER
                                                                                                          //BUZZER
int melody[] = {                                                                                          //BUZZER
  NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8,//1                                                                  //BUZZER
  NOTE_F5,2, NOTE_C6,2,                                                                                   //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,                          //BUZZER
  NOTE_F5,2, NOTE_C6,2,                                                                                   //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,                                                 //BUZZER
                                                                                                          //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4, //8                                             //BUZZER
  NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16,                                   //BUZZER
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C5,-8, NOTE_C5,16,                //BUZZER
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER
                                                                                                          //BUZZER
  NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,//13                                               //BUZZER
  NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,                                     //BUZZER
  NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C6,-8, NOTE_C6,16,                //BUZZER
  NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,             //BUZZER
  NOTE_C6,1                                                                                               //BUZZER
};                                                                                                        //BUZZER
                                                                                                          //BUZZER
int notes = sizeof(melody) / sizeof(melody[0]) / 2;                                                       //BUZZER
int wholenote = (60000 * 4) / tempo;                                                                      //BUZZER
                                                                                                          //BUZZER
int divider = 0, noteDuration = 0;                                                                        //BUZZER
                                                                                                          //BUZZER
                                                                                                       //ANTENNE
void setup() {                                                                                         //ANTENNE
  Serial.begin(9600);                                                                                  //ANTENNE
  while (!Serial) {                                                                                    //ANTENNE
    ;                                                                                                  //ANTENNE
  }                                                                                                    //ANTENNE
  mySerial.begin(9600);                                                                                //ANTENNE
}                                                                                                      //ANTENNE
                                                                                                       //ANTENNE
void loop() {
 for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {                                  //BUZZER
    divider = melody[thisNote + 1];                                                                       //BUZZER
    if (divider > 0) {                                                                                    //BUZZER
      noteDuration = (wholenote) / divider;                                                               //BUZZER
    } else if (divider < 0) {                                                                             //BUZZER
      noteDuration = (wholenote) / abs(divider);                                                          //BUZZER
      noteDuration *= 1.5;                                                                                //BUZZER
    }                                                                                                     //BUZZER
    tone(buzzer, melody[thisNote], noteDuration*0.9);                                                     //BUZZER
    delay(noteDuration);                                                                                  //BUZZER
    noTone(buzzer);                                                                                       //BUZZER
 mySerial.write("CAN-85 connected successfully - Ceci est un Cansat, nous sommes pacifiques // This is a Cansat, we're friendly \n"); //ANTENNE
// delay(2000);                                                                                          //ANTENNE
  }
}
