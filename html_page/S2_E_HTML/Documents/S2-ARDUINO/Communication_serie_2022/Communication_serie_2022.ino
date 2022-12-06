/* Ce programme permet de se familiariser avec la communication série
et de comprendre les différentes possibilités pour afficher un message.
L'utilisateur est invité à effectuer un choix, le code met
en évidence ce choix et la création de fonction (sous-programme)
*/
int DonneeEntrante=0;
void setup() {
Serial.begin(9600);
Serial.println("---------------------");
Serial.println("|    IDE ARDUINO    |");
Serial.println("---------------------");
Serial.print("\n \n");//retour ligne
Serial.println("REMARQUE : PAS DE CARATERES SPECIAUX NI D'ACCENTUATION !!");
Serial.print("\n \n");//retour ligne
}

void loop() {
Serial.println("DEBUT DE CYCLE   ");delay(1000);
Serial.println("Le texte s'affiche et un retour ligne s'effectue");delay(500);
Serial.print("Le texte s'affiche et un retour ligne s'effectue \n");delay(500);
Serial.print("Le texte s'affiche et un changement de colonne s'effectue....   ");delay(500);
Serial.println("Le texte s'affiche et un retour ligne s'effectue");delay(500);
Serial.println("Le texte s'affiche sur une nouvelle ligne....   ");delay(500);


Serial.println("FIN DE CYCLE   ");delay(1000);
if (Serial.available()>0){DonneeEntrante=Serial.read();
    Serial.print("La donnee entrante est : ");
    Serial.println(DonneeEntrante);
    delay(3000);
    if (DonneeEntrante==49){Serial.println("Le sous programme 1 est lance !");Sous_Programme_1();}
    if (DonneeEntrante==50){Serial.println("Le sous programme 2 est lance !");Sous_Programme_2();}
}
}
void Sous_Programme_1(){
  while (DonneeEntrante!=50){Serial.println("Bonjour");
        DonneeEntrante=Serial.read();
        if (DonneeEntrante==50){Serial.println("Le sous programme 2 est lance !");Sous_Programme_2();}}}
  
void Sous_Programme_2(){
  while (DonneeEntrante!=49){Serial.println("Au Revoir");
        DonneeEntrante=Serial.read();
        if (DonneeEntrante==49){Serial.println("Le sous programme 1 est lance !");Sous_Programme_1();}}}
