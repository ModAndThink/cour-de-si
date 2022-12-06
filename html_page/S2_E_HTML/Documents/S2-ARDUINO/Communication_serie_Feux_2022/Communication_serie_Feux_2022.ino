const int led_rouge_VA=8;
const int led_orange_VA=7;
const int led_vert_VA=6;
const int led_rouge_VB=9;
const int led_orange_VB=10;
const int led_vert_VB=11;
int DonneeEntrante=0;

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

Serial.println("-------------------------");
Serial.println("|    FEUX TRICOLORES    |");
Serial.println("-------------------------");
Serial.print("\n \n");//retour ligne
Serial.println("Appuyer sur le 0 pour arreter le systeme");
Serial.println("Appuyer sur le 1 pour les feux clignotants");
Serial.println("Appuyer sur le 2 pour les feux tricolores");
Serial.print("\n \n");//retour ligne
}

void loop() {
if (Serial.available()>0){DonneeEntrante=Serial.read();
    if (DonneeEntrante==48){Sous_Programme_0();}
    if (DonneeEntrante==49){Sous_Programme_1();}
    if (DonneeEntrante==50){Sous_Programme_2();}}}
    
void Sous_Programme_0(){
  while (DonneeEntrante!=49){
  digitalWrite(led_rouge_VA,HIGH);
  digitalWrite(led_orange_VA,HIGH);
  digitalWrite(led_vert_VA,HIGH);
  digitalWrite(led_rouge_VB,HIGH);
  digitalWrite(led_orange_VB,HIGH);
  digitalWrite(led_vert_VB,HIGH);
        DonneeEntrante=Serial.read();
        if (DonneeEntrante==49){Sous_Programme_1();}
        if (DonneeEntrante==50){Sous_Programme_2();}}}



void Sous_Programme_1(){
  while (DonneeEntrante!=50){
        digitalWrite(led_rouge_VA,HIGH);
        digitalWrite(led_rouge_VB,HIGH);
        digitalWrite(led_orange_VA,LOW);
        digitalWrite(led_orange_VB,LOW);
        delay(1000);
        digitalWrite(led_orange_VA,HIGH);
        digitalWrite(led_orange_VB,HIGH);
        delay(1000);
        DonneeEntrante=Serial.read();
        if (DonneeEntrante==48){Sous_Programme_0();}
        if (DonneeEntrante==50){Sous_Programme_2();}}}
  
void Sous_Programme_2(){
  while (DonneeEntrante!=49){
    digitalWrite(led_orange_VA,HIGH);
    digitalWrite(led_orange_VB,HIGH);
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
        DonneeEntrante=Serial.read();
        if (DonneeEntrante==48){Sous_Programme_0();}
        if (DonneeEntrante==49){Sous_Programme_1();}}}

