
/*****************************************************************
**                                                              **
**                       TÍTOL:potenciometre                    **
**       Titol:  Llegir valor potenciomentre monitor serie      **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);     // Activem el Monitor serie a 9600 bauds
}


//*********************** LOOP ***********************************


void loop () {                      // inicia el bucle del programa
  Serial.println(analogRead(A0));   /*Lleguim el valor de A0 i el
                                      llegim en pantalla*/
}



//*********************** FUNCIONS *******************************
