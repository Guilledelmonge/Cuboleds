#include <avr/pgmspace.h> // allows use of PROGMEM to store patterns in flash

#define CUBESIZE 4 //Definimos el tamaño del cubo
#define PLANESIZE CUBESIZE*CUBESIZE
#define PLANETIME 2222 // Tiempo que refresca
#define TIMECONST 10 //El tiempo que se encenderá


const char PROGMEM PatternTable[] = {
  // Aqui hacemos que encienda cada led con 1 y apague con 0


  //encender extremos 

  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,10,
  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,10,
  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,10,
  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,  B1001,B1001,B1001,B1001,10,
  //encender centros
  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,10,
  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,10,
  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,10,
  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,  B0110,B0110,B0110,B0110,10,
  //linea 1
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  //linea 2
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  //linea 3
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  //linea 4
  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,10,
  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,10,
  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,10,
  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,  B0001,B0001,B0001,B0001,10,
  //linea 3
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,  B0010,B0010,B0010,B0010,10,
  //linea 2
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,  B0100,B0100,B0100,B0100,10,
  //linea 1
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,  B1000,B1000,B1000,B1000,10,
  //todos
  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,  B1111,B1111,B1111,B1111,10,
  //fila 1
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  //fila 2
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  //fila 3
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  //fila 4
  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,10,
  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,10,
  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,10,
  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,  B0000,B0000,B0000,B1111,10,
  //fila 3
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,  B0000,B0000,B1111,B0000,10,
  //fila 2
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,  B0000,B1111,B0000,B0000,10,
  //fila 1
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,  B1111,B0000,B0000,B0000,10,
  //primera planta
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  //segunda planta
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000, B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  //tercera planta
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111, B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  //cuarta planta
  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000, B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  //tercera planta
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111, B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  //segunda planta
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000, B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,  B0000,B0000,B0000,B0000,10,
  //primera planta
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1111,B1111,B1111,B1111,10,
  //esquinas
  B1001,B0000,B0000,B1001,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1001,B0000,B0000,B1001,10,
  B1001,B0000,B0000,B1001,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1001,B0000,B0000,B1001,10,
  B1001,B0000,B0000,B1001,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1001,B0000,B0000,B1001,10,
  B1001,B0000,B0000,B1001,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B1001,B0000,B0000,B1001,10,
  //planta4 + (linea 1 y linea 4)de planta 3
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111, B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,10,
  //letra o
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111, B1111,B0000,B0000,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B1111,B0000,B0000,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B1111,B0000,B0000,B1111,  B1111,B1111,B1111,B1111,10,
  B1111,B1111,B1111,B1111,  B1111,B0000,B0000,B1111,  B1111,B0000,B0000,B1111,  B1111,B1111,B1111,B1111,10,
  //letra N
  B1111,B0000,B0000,B1111,  B1111,B1111,B0000,B1111, B1111,B0000,B1111,B1111,  B1111,B0000,B0000,B1111,10,
  B1111,B0000,B0000,B1111,  B1111,B1111,B0000,B1111,  B1111,B0000,B1111,B1111,  B1111,B0000,B0000,B1111,10,
  B1111,B0000,B0000,B1111,  B1111,B1111,B0000,B1111,  B1111,B0000,B1111,B1111,  B1111,B0000,B0000,B1111,10,
  B1111,B0000,B0000,B1111,  B1111,B1111,B0000,B1111,  B1111,B0000,B1111,B1111,  B1111,B0000,B0000,B1111, 10,




  //B0000,B0000,B1111,B1110,  B0000,B0000,B1001,B1000,  B0000,B0000,B1001,B1001,  B0000,B0000,B1111,B1110,10,
  //B0000,B1111,B1111,B1110,  B0000,B1001,B1001,B1000,  B0000,B1001,B1001,B1001,  B0000,B1111,B1111,B1110,10,
  //B1111,B1111,B1111,B1110,  B1001,B1001,B1001,B1000,  B1001,B1001,B1001,B1001,  B1111,B1111,B1111,B1110,1000,
  //B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,B0000,10,

  // Este apaga todos los leds
  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,  B0000,B0000,B0000,B0000,0,
};

/*
** Definición de los pines en conjunto hace que sea más fácil para reorganizar cómo está cableado cubo
 ** Tenga en cuenta que las entradas analógicas A0-A5 también son salidas digitales 14-19!
 ** Pin DigitalOut0 (RX de serie) y AnalogIn5 se dejan abiertas para aplicaciones futura
 */

int LEDPin[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int PlanePin[] = {
  16, 17, 18, 19};

// Inicialización
void setup()
{
  int pin; // Contador del ciclo
  // configurar pines LED como salida (HIGH activo)
  for (pin=0; pin<PLANESIZE; pin++) {
    pinMode( LEDPin[pin], OUTPUT );
  }
  // establecer los pins del plano como salidas (LOW activo)
  for (pin=0; pin<CUBESIZE; pin++) {
    pinMode( PlanePin[pin], OUTPUT );
  }
}

// patrón de visualización en la tabla hasta DisplayTime es cero (luego repetir)
void loop()
{
  //Declaramos las variables
  byte PatternBuf[PLANESIZE]; // guardamos el patrón actual de PatternTable
  int PatternIdx;
  byte DisplayTime;
  unsigned long EndTime;
  int plane; // contador del ciclo del cubo en la actualización
  int patbufidx;
  int ledrow;
  int ledcol;
  int ledpin;

  // Inicialice PatternIdx al principio de la tabla patrón
  PatternIdx = 0;
  // lazo sobre entradas en la tabla de patrón - mientras DisplayTime> 0
  do {
    // leer el patrón de PROGMEM y ahorrar en el arreglo
    memcpy_P( PatternBuf, PatternTable+PatternIdx, PLANESIZE );
    PatternIdx += PLANESIZE;
    // leer DisplayTime de PROGMEM e incrementar el índice
    DisplayTime = pgm_read_byte_near( PatternTable + PatternIdx++ );
    // calcular EndTime de hora actual (ms) y DisplayTime
    EndTime = millis() + ((unsigned long) DisplayTime) * TIMECONST;

    // ciclo while DisplayTime> 0 y la hora actual <EndTime
    while ( millis() < EndTime ) {
      patbufidx = 0; // resetear el contador de índice a principios de búfer
      for (plane=0; plane<CUBESIZE; plane++) {
        if (plane==0) {
          digitalWrite( PlanePin[CUBESIZE-1], HIGH );
        } 
        else {
          digitalWrite( PlanePin[plane-1], HIGH );
        }

        // cargar los datos actuales del patrón plano en puertos
        ledpin = 0;
        for (ledrow=0; ledrow<CUBESIZE; ledrow++) {
          for (ledcol=0; ledcol<CUBESIZE; ledcol++) {
            digitalWrite( LEDPin[ledpin++], PatternBuf[patbufidx] & (1 << ledcol) );
          }
          patbufidx++;
        }

        // Encender el plano actual
        digitalWrite( PlanePin[plane], LOW );
        // espera PLANETIME definida anteriormente
        delayMicroseconds( PLANETIME );
      }
    }
  } 
  while (DisplayTime > 0); // leer los patrones hasta el tiempo = 0, lo que indica final

}










