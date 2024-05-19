 //enteros
 //int entero;
 //long largo;
 //short vshort;
 //byte vbyte;

 //decimales
 //double doble;
 //float flotante;

 //booleano
 //bool booleano;

 //caracteres
// String cadena;
 //char car;
 

//caracteres con ejemplo
int entero =  10;
long largo =  20L;
short vshort =  30;
byte vbyte =  40;

double doble =  50.50;
float flotante =  60.60f;

bool booleano = true;

String cadena = "Hola mundo";
char car = 'A';

void setup() {
  // Configuramos la velocidad de transmisión en serie
  Serial.begin(9600);

  // Imprimimos los valores de las variables
  Serial.println("Entero: " + String(entero));
  Serial.println("Largo: " + String(largo));
  Serial.println("Short: " + String(vshort));
  Serial.println("Byte: " + String(vbyte));
  Serial.println("Doble: " + String(doble));
  Serial.println("Flotante: " + String(flotante));
  Serial.println("Booleano: " + String(booleano ? "true" : "false"));
  Serial.println("Cadena: " + cadena);
  Serial.println("Carácter: " + String(car));
}

void loop() {
  // No es necesario poner nada aquí si solo quieres imprimir una vez
}

