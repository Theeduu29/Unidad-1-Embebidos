
int led = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600); // velocidad por defecto usada por arduino
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, 1);
  Serial.println("LED ENCENDIDO");
  delay(1000);
  digitalWrite(led, 0);
  Serial.println("LED APAGADO");
  delay(1000);
}
