int led = 12;

void setup() {
  // put your setup code here, to run once:
  //el modulo de comunicacion serial --- UART
  //Inicialización
  Serial.begin(9600); //baudios

}

void loop() { //16Mhz
  // put your main code here, to run repeatedly:
  Serial.println("Hola mundo");
  delay(500); //ms

}
