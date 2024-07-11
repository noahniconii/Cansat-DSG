// Initialise la variable qui va recueillir la valeur du potentiomètre
int Pot; 

void setup() {
  Serial.begin(9600); //Initialise la communication entre le PC et Arduino
}

void loop() {
  // Lire la valeur du potentiomètre
  Pot = analogRead(A0); 

  //Affiche la valeur du potentiomètre sur le moniteur série
  Serial.println(Pot);  

  //Pause de 200 millisecondes
  delay(50); 

}
