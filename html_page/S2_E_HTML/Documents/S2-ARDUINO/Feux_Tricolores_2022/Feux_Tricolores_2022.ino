/* Programme de feux tricolores
 Utiliser la maquette des feux tricolores
 avec une carte ARDUINO UNO
 Les feux rouge avec un interval de temps
 d'une durée de 2 secondes, feux oranges durée
 1 seconde et feux verts durée 5 secondes.
 L'utilisation de "const" devant "int" permet de ne
 pas consommer de mémoire système
 AC@NDS2022
 */
const int led_rouge_VA=8;
const int led_orange_VA=7;
const int led_vert_VA=6;
const int led_rouge_VB=9;
const int led_orange_VB=10;
const int led_vert_VB=11;

void setup() {
Serial.begin(9600);
pinMode(led_rouge_VA,OUTPUT);
pinMode(led_orange_VA,OUTPUT);
pinMode(led_vert_VA,OUTPUT);
pinMode(led_rouge_VB,OUTPUT);
pinMode(led_orange_VB,OUTPUT);
pinMode(led_vert_VB,OUTPUT);
digitalWrite(led_rouge_VA,HIGH);
digitalWrite(led_orange_VA,HIGH);
digitalWrite(led_vert_VA,HIGH);
digitalWrite(led_rouge_VB,HIGH);
digitalWrite(led_orange_VB,HIGH);
digitalWrite(led_vert_VB,HIGH);
}

void loop() {
digitalWrite(led_rouge_VA,LOW);
digitalWrite(led_rouge_VB,LOW);
delay(2000);
 digitalWrite(led_rouge_VB,HIGH);
 digitalWrite(led_vert_VB,LOW);
 delay(5000);
digitalWrite(led_orange_VB,LOW);
digitalWrite(led_vert_VB,HIGH);
delay(1000);
 digitalWrite(led_orange_VB,HIGH);
 digitalWrite(led_rouge_VB,LOW);
 delay(2000);
digitalWrite(led_rouge_VA,HIGH);
digitalWrite(led_vert_VA,LOW);
delay(5000);
 digitalWrite(led_orange_VA,LOW);
 digitalWrite(led_vert_VA,HIGH);
 delay(1000);
digitalWrite(led_orange_VA,HIGH);
digitalWrite(led_rouge_VA,LOW);
delay(2000);
}
