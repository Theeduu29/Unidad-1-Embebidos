int led1 = 9;             //Define led1 como el puerto 13 del arduino
int led2 = 10;             //Define led2 como el puerto 12 del arduino
int led3 = 11;             //Define led3 como el puerto 11 del arduino

void setup() {              //Se ejecuta una vez al iniciar
  Serial.begin(9600);   
  Serial.setTimeout(10);   //Intenta conectarse antes de 10 segundos
  pinMode(led1, OUTPUT);   //Define el modo del led1
  pinMode(led2, OUTPUT);   //Define el modo del led2
  pinMode(led3, OUTPUT);   //Define el modo del led3
}

void loop (){               //Se ejecuta constantemente
	if (Serial.available()>0){
		int v = Serial.readString().toInt();  //Ingresa un dato por Monitor
		digitalWrite(led1, 0);  //apaga led1
		digitalWrite(led2, 0);  //apaga led2
		digitalWrite(led3, 0);  //apaga led3

		switch (v) {            //Elige el caso del monitor
		
		case 0:
			digitalWrite(led1, 1);  //Enciende led1
		break;                    //Rompe el ciclo

		case 1:
			digitalWrite(led2, 1);  //Enciende led2
		break;                    //Rompe el ciclo

		case 2:
			digitalWrite(led3, 1);  //Enciende led3
		break;                    //Rompe el ciclo

		default:                  //Caso distinto 

			Serial.println("error");//Imprime en la consola
		break;
		
		}
	}
}