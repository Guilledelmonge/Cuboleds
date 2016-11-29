void setup() {
pinMode( 0, OUTPUT );pinMode( 1, OUTPUT );pinMode( 2, OUTPUT );pinMode( 3, OUTPUT );pinMode( 4, OUTPUT );pinMode( 5, OUTPUT );pinMode( 6, OUTPUT );
pinMode( 7, OUTPUT );pinMode( 8, OUTPUT );pinMode( 9, OUTPUT );pinMode( 10, OUTPUT );pinMode( 11, OUTPUT );pinMode( 12, OUTPUT );pinMode( 13, OUTPUT );
pinMode( 14, OUTPUT );pinMode( 15, OUTPUT );pinMode( 16, OUTPUT );pinMode( 17, OUTPUT );pinMode( 18, OUTPUT );pinMode( 19, OUTPUT );
Serial.end();
}
void loop() {

  //LETRA G
  //1
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14,HIGH );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
    }
   
   //2
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH);digitalWrite( 9, HIGH );digitalWrite( 10, HIGH);digitalWrite( 11, HIGH);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH );digitalWrite( 9, LOW );digitalWrite( 10, HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH );digitalWrite( 9, HIGH );digitalWrite( 10, HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW);digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
   }
   
    //3
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH);
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW);digitalWrite( 11,LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW);digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
   }
    //4
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, HIGH);digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7,LOW );digitalWrite( 8, LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW);digitalWrite( 11,LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH );digitalWrite( 1,HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5,LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW);digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
   }
     //3
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH);
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW);digitalWrite( 11,LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW);digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
   }
    //2
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH);digitalWrite( 9, HIGH );digitalWrite( 10, HIGH);digitalWrite( 11, HIGH);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH );digitalWrite( 9, LOW );digitalWrite( 10, HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, HIGH );digitalWrite( 9, HIGH );digitalWrite( 10, HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW);digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
   }
    //1
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14,HIGH );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
    }
  
  //LETRA U. 
 // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //4
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH);digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, HIGH);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
 }
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
   //1
 for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14,LOW );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
    }
    
    //LETRA I. 
 // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH);digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH);digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15,HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,HIGH );digitalWrite( 10, HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  LOW );digitalWrite( 9, HIGH );digitalWrite( 10, HIGH );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  LOW);digitalWrite( 9, HIGH );digitalWrite( 10, HIGH);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH);
   digitalWrite( 6,HIGH );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, HIGH);
   digitalWrite( 6, HIGH );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //4
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, HIGH);digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, HIGH);digitalWrite( 2, HIGH );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, HIGH );digitalWrite( 2,HIGH);digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH);digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH);
   digitalWrite( 6,HIGH );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, HIGH);
   digitalWrite( 6, HIGH );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
    
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,HIGH );digitalWrite( 10, HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  LOW );digitalWrite( 9, HIGH );digitalWrite( 10, HIGH );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  LOW);digitalWrite( 9, HIGH );digitalWrite( 10, HIGH);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
   // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH);digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, HIGH);digitalWrite( 14, HIGH);digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15,HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
   
  
   
    //LETRA L. 
 // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //4
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3,LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH);digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
    //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
    }
  // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
    //LETRA L. 
 // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //4
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3,LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH);digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
    //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
    }
  // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  /*
  //LETRA E. 
 // 1
   for(int i=0; i<100; i++) { 
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, HIGH);digitalWrite( 10,HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, HIGH );digitalWrite( 10,HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
 //4
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, HIGH );digitalWrite( 1, HIGH);digitalWrite( 2, HIGH );digitalWrite( 3,HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7,LOW);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, HIGH );digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, HIGH );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, HIGH);digitalWrite( 1, HIGH );digitalWrite( 2, HIGH );digitalWrite( 3, HIGH);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW);digitalWrite( 7,LOW );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  /*
  //3
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH);digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH );digitalWrite( 7, HIGH );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11,  LOW);
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW);digitalWrite( 8,  LOW);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW);
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, HIGH );digitalWrite( 5, HIGH );
   digitalWrite( 6, HIGH);digitalWrite( 7,HIGH );digitalWrite( 8, LOW );digitalWrite( 9,  LOW );digitalWrite( 10,  LOW);digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
    //2
  for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, HIGH);digitalWrite( 10,HIGH );digitalWrite( 11, HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9, HIGH );digitalWrite( 10,HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12,LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH);digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8,  HIGH );digitalWrite( 9,  HIGH );digitalWrite( 10,  HIGH );digitalWrite( 11,  HIGH );
   digitalWrite( 12, LOW);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  */
   // 1
   for(int i=0; i<100; i++) {
   // nivel 1
   digitalWrite( 0, LOW );digitalWrite( 1, LOW);digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, HIGH );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19,LOW);
   delay(1);
   // nivel 2
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12,HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH);
   
   digitalWrite( 16, LOW );digitalWrite( 17, HIGH );digitalWrite( 18, LOW );digitalWrite( 19, LOW);
   delay(1);
   // nivel 3
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW);
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, LOW );digitalWrite( 14, LOW );digitalWrite( 15, LOW);
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW);digitalWrite( 18, HIGH );digitalWrite( 19, LOW);
   delay(1);
   // nivel 4
   digitalWrite( 0, LOW );digitalWrite( 1, LOW );digitalWrite( 2, LOW );digitalWrite( 3, LOW);digitalWrite( 4, LOW );digitalWrite( 5, LOW );
   digitalWrite( 6, LOW );digitalWrite( 7, LOW );digitalWrite( 8, LOW );digitalWrite( 9, LOW );digitalWrite( 10, LOW );digitalWrite( 11, LOW );
   digitalWrite( 12, HIGH);digitalWrite( 13, HIGH );digitalWrite( 14, HIGH );digitalWrite( 15, HIGH );
   
   digitalWrite( 16, LOW );digitalWrite( 17, LOW );digitalWrite( 18, LOW );digitalWrite( 19, HIGH );
   delay(1);
  }
  
  }
  
