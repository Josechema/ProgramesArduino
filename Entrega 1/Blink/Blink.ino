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

void setup() {             // configura el final de la sortida
pinMode(LED_BUILTIN, OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
digitalWrite(LED_BUILTIN, HIGH);   // Encen el LED cuan hi ha tensió
  delay(1000);                       //  ms que el LED estara ences
  digitalWrite(LED_BUILTIN, LOW);    // Apaga el LED cuna cau el voltatge
  delay(1000);                       // ms que el LED estara apagat  
}



//*********************** FUNCIONS *******************************
