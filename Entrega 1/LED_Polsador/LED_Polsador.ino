/*****************************************************************
**                                                              **
**                       TÍTOL:LED per pulsador                 **
**         Encendre el led per un polsador                      **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la salida
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}


//*********************** LOOP ***********************************


void loop () {             // inicia el bucle del programa
  if(digitalRead(4)){
    digitalWrite(2, HIGH);
   }else{
    digitalWrite(2, LOW);
   }
}



//*********************** FUNCIONS *******************************
