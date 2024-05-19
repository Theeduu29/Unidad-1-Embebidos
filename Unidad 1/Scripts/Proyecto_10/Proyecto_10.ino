void setup() {
  Serial.begin(9600);
}

void loop() {
  //OBTIENES EL TIEMPO EN MILISEGUNDOS QUE SE INICIA LA PLACA
  long v = millis() / 1000;
  //IMPRIME EL TIEMPO EN SEGUNDOS
  Serial.println(v);
  delay(1000);
}
