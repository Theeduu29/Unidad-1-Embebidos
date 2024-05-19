int leds[4] = {9,10 ,11 ,12 }; //Define un vector llamado leds, que guarda 4 valores

void setup() {                  //Se ejecuta una vez al iniciar
  for (int i = 0; i < 4; i++) { //Crea un ciclo que se repite 4 veces
    pinMode(leds[i], OUTPUT);   //Define el modo de los leds
  }
}

void loop() {                   //Ejecuta constantemente
  for (int i = 0; i < 4; i++) { //Ejecuta 4 veces
    digitalWrite(leds[i], 1);   //Enciende el led de la primera iteración
    delay(1000);                //Espera un segundo
    digitalWrite(leds[i], 0);   //Apaga el led de la primera iteración
    delay(1000);                //Espera un segundo
  }
}
