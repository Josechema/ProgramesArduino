/*****************************************************************
**                                                              **
**                 TÍTOL:LED controlat per potenciometre        **
**         Controlar el voltatge de un LED per potenciometre    **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:19/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************
int sensorValue = 0;        // variable del valor potenciometre


//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);      // Monitor serie a 9600 bauds
  pinMode(9,OUTPUT);       // Led sortida pin 9
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
  Serial.println(analogRead(A0)); // Lleguiex valor potenciometre
  sensorValue = analogRead(A0);  // Variable de potenciomentre
  analogWrite(9, sensorValue/4); // LED treu el valor del potencioemntre
}



//*********************** FUNCIONS *******************************
