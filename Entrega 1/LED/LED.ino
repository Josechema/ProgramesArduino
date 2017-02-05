/*****************************************************************
**                                                              **
**                       TÍTOL:LED                              **
**               Encendre led a la protoboard                   **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
pinMode(2, OUTPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
digitalWrite(2, HIGH);     // Indica la sortida digital del LED
delay(500);                // ms que estara ences
digitalWrite(2, LOW);      // indica la sortida digital del LED
delay(500);                // ms que estara apagat
}



//*********************** FUNCIONS *******************************
