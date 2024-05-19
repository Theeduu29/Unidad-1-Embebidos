// ENCENDER LED
// LED DIGITAL - ANALOGICO

int led = 12; // SENSOR O ACTUADOR CONECTADO EN EL PIN #13

void setup() {
  // put your setup code here, to run once:
  // SENSORES SON DE ENTRADA, ACTUADORES DE SALIDA

  //CONFIGURACIÓN DEL MODO DE TRABAJO DEL PIN ASOCIADO A LA VARIABLE LED
  pinMode(led, OUTPUT); //OUTPUT INPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,1);
  delay(1000); //milisegundos
  digitalWrite(led,0);
  delay (1000);
}
