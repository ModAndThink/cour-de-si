/* Programme de feux clignotants
 Utiliser la maquette des feux tricolores
 avec une carte ARDUINO UNO
 Les feux clignotent Orange avec un interval de temps
 d'une durée de 1 seconde.
 L'utilisation de "const" devant "int" permet de ne
 pas consommer de mémoire système
 AC@NDS2022
 */
//Déclaration des variables
const int led_orange_VA=7;
const int led_orange_VB=10;

void setup() {
//Déclartion des ports "pinMode" en sortie "OUTPUT"
pinMode(led_orange_VA,OUTPUT);
pinMode(led_orange_VB,OUTPUT);
//Eteindre les Led Oranges sur voies A et B
digitalWrite(led_orange_VA,HIGH);
digitalWrite(led_orange_VB,HIGH);
}

void loop() {
  digitalWrite(led_orange_VB,LOW);
  digitalWrite(led_orange_VA,LOW);
  delay(1000);
  digitalWrite(led_orange_VB,HIGH);
  digitalWrite(led_orange_VA,HIGH);
  delay(1000);
}

  
  
