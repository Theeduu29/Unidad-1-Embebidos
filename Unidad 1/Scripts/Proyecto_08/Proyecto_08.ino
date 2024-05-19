int leds[4] = {9, 10, 11, 12};

void setup() {
  for (int i = 0; i < 4; i++) { 
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  // Verificamos si hay datos disponibles en el puerto serial
  if (Serial.available() > 0) {
    // Leemos la cadena de caracteres enviada y la convertimos a entero
    int v = Serial.readString().toInt();
    // Apagamos todos los LEDs
    for (int i = 0; i < 4; i++) {
      // Ponemos el pin a nivel bajo (LOW) para apagar el LED
      digitalWrite(leds[i], 0);
    }
    // Encendemos el LED correspondiente al valor entero leído
    // Ponemos el pin a nivel alto (HIGH) para encender el LED
    digitalWrite(leds[v], 1);
  }
}
