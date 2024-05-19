int led = 10;

void setup() {
  
}

void loop() {
  //RECORRE UN BUCLE DE TODOS LOS VALORES DE BRILLO
  for (int i = 0; i < 255; i++) {
    //ENCIENDE EL LED CON EL ULTIMO BRILLO GUARDADO
    analogWrite(led, i);
    delay(10);
  }
  //BUCLE QUE RECORRE LOS VALORES DE BRILLO EN ORDEN INVERSO
  for (int i = 255; i > 0; i--) {
    analogWrite(led, i);
    delay(10);
  }
}
