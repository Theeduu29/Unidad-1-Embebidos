int led = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Para encender el led presione 1 y para apagarlo presione 0")
  if (Serial.available()>0){ //si hay inf que leer en el buffer, entonces...
    // considerando usuarios perfectos que solo enviarán "1" o "0"
    int resultado = Serial.readString().toInt();

    if (resultado == 1){
      digitalWrite(led, 1);
      Serial.println("LED ENCENDIDO");
      //delay(1000); NO ES NECESARIO PONERLO AQUÍ
    }else{
        digitalWrite(led, 0);
        Serial.println("LED APAGADO");
        //delay(1000); NO ES NECESARIO PONERLO AQUÍ
    }
  }
  delay(10);
}
