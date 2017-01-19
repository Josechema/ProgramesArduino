/*****************************************************************
**                                                              **
**                       TÍTOL:Potenciometre                    **
**         Configurar rang de valors del potenciometre          **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  Serial.begin(9600);      /*obre port serie i fixa la velocitat
                             en baudis per la transmisio de dades
                             serie*/ 
                            
}


//*********************** LOOP ***********************************


void loop () {                     // inicia el bucle del programa
  Serial.println(analogRead(A0));  /*llegeix la dada dada del 
                                     potenciomentre*/
}



//*********************** FUNCIONS *******************************
