#define buzzer 13                                                                           // affectation des broches
int frequence[] = {262, 294, 330, 349, 370, 392, 440, 494};      // tableau de fréquence des notes

void setup()
{

}

void loop()
{
  for (int i = 1000; i < 4000; i++)
  {
  tone(buzzer, frequence[i], 500);                                                  // la note est jouée pendant 500 ms

  delay(500);                                                                                    // attente de 500 ms entre chaque note
  }
}
