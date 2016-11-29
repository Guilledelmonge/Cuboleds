void setup() {
pinMode( 30, OUTPUT );pinMode( 31, OUTPUT );pinMode( 32, OUTPUT );pinMode( 33, OUTPUT );pinMode( 34, OUTPUT );pinMode( 35, OUTPUT );pinMode( 36, OUTPUT );
pinMode( 37, OUTPUT );pinMode( 38, OUTPUT );pinMode( 39, OUTPUT );pinMode( 40, OUTPUT );pinMode( 41, OUTPUT );pinMode( 42, OUTPUT );pinMode( 43, OUTPUT );
pinMode( 44, OUTPUT );pinMode( 45, OUTPUT );pinMode( 46, OUTPUT );pinMode( 47, OUTPUT );pinMode( 48, OUTPUT );pinMode( 49, OUTPUT );
Serial.end();
}

void showFrame(int treinta, int treintayuno, int treintaydos, int treintaytres, int treintaycuatro, int treintaycinco, int treintayseis, 
               int treintaysiete, int treintayocho, int treintaynueve, int cuarenta,
               int cuarentayuno, int cuarentaydos, int cuarentaytres, int cuarentaycuatro, int cuarentaycinco, int cuarentayseis, 
               int cuarentaysiete, int cuarentayocho, int cuarentaynueve) {
   digitalWrite( 30, treinta );digitalWrite( 31, treintayuno);digitalWrite( 32, treintaydos );digitalWrite( 33, treintaytres);
   digitalWrite( 34, treintaycuatro );digitalWrite( 35, treintaycinco );
   digitalWrite( 36, treintayseis );digitalWrite( 37, treintaysiete );digitalWrite( 38, treintayocho );digitalWrite( 39, treintaynueve );
   digitalWrite( 40, cuarenta );digitalWrite( 41, cuarentayuno );
   digitalWrite( 42, cuarentaydos);digitalWrite( 43, cuarentaytres );digitalWrite( 44, cuarentaycuatro );digitalWrite( 45, cuarentaycinco );
   
   digitalWrite( 46, cuarentayseis );digitalWrite( 47, cuarentaysiete );digitalWrite( 48, cuarentayocho );digitalWrite( 49,cuarentaynueve);
   delay(1);

}

void loop() {


 //LETRA G 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW, HIGH, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW, HIGH, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }


   
 
 
 //LETRA U
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 

 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 

 //LETRA I
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW, HIGH, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
//3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
//2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }

 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW, HIGH, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 
 //LETRA L
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);
  
    }
  //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH); 
   }
   
   //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
   
   //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }  
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH); 
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);
  }
 
 // Segunda LETRA L
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);
  
    }
  //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH); 
   }
   
   //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
   
   //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }  
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH); 
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);
  }
 
 
 //LETRA e
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }


 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 

 //LETRA R
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //LETRA M
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }

 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //LETRA O
 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 
 //4
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame(HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame(HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }
 
 //3
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }

 //2
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH, HIGH, HIGH, HIGH,   LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW, HIGH);  
   }

 //1
 for(int i=0; i<100; i++) {
   // nivel 1
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW);
   // nivel 2
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW, HIGH,  LOW,  LOW);
   // nivel 3
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH,  LOW,  LOW, HIGH,  LOW,  LOW, HIGH,  LOW);
   // nivel 4
   showFrame( LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  LOW,  HIGH, HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, HIGH);  
   }  
   }

      
   
