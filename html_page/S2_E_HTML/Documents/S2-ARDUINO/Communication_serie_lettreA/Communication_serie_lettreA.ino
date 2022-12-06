int DonneeEntrante=0;
void setup() {
Serial.begin(9600);
Serial.println("-----------------------------");
Serial.println("|    Communication serie    |");
Serial.println("-----------------------------");
Serial.print("\n \n");//retour ligne
Serial.println("Saisir un caractere.....");
Serial.println("Le code vous renvoie le caractere :)");
Serial.print("\n \n");//retour ligne
}

void loop() {
if (Serial.available()>0){DonneeEntrante=Serial.read();
Serial.print("La valeur saisie est :");
Serial.println(DonneeEntrante,BIN);//HEX pour héxadécimal, BIN pour binaire, DEC pour décimal
delay(2000);}
}
