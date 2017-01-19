/*****************************************************************
**                                                              **
**                       TÍTOL:Blink                            **
**         Encendre el led de proba de la placa arduino         **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
pinMode(LED_BUILTIN, OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       //  for a secondwait
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second  
}



//*********************** FUNCIONS *******************************
