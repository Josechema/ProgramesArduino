/*****************************************************************
**                                                              **
**                 TÍTOL:LED controlat per potenciometre        **
**         Controlar el voltatge de un LED per potenciometre    **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:19/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************
int sensorValue = 0;


//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
  Serial.println(analogRead(A0));
  sensorValue = analogRead(A0);
  analogWrite(9, sensorValue/4);
}



//*********************** FUNCIONS *******************************
