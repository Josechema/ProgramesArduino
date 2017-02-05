/*****************************************************************
**                                                              **
**                       TÍTOL:LED per pulsador                 **
**                   Encendre el led per un polsador            **
**                                                              **
**  NOM: JOSE MARIA GIL FLORES              DATA:18/01/2017     **
*****************************************************************/

//********************* INCLUDE  *********************************


//********************* VARIABLES ********************************



//*********************** SETUP **********************************

void setup() {             // configura el final de la sortida
  pinMode(2, OUTPUT);      // sortida pin 2
  pinMode(4, INPUT);       // entrada pin 4
}


//*********************** LOOP ***********************************


void loop () {             // inicia bucle del programa
  if(digitalRead(4)){      // observa estat de la entrada 4
    digitalWrite(2, HIGH); // si esta amb voltatge sortida 1
   }else{
    digitalWrite(2, LOW); // si esta sense voltatge sortida 0
   }
}



//*********************** FUNCIONS *******************************
