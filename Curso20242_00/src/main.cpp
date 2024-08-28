#include <Arduino.h>

int myFunction(int, int);
void duplicar(int * puntero);
int numero = 10; // variable global
// @brief el punto de entrada del sisteme

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("numero = ");
  Serial.println(numero);

  duplicar(&numero);  // significa que le paso la direcciond e dmemoria de la var numero
  delay(1000);
}


void duplicar (int * puntero){
  * puntero = * puntero * 2;
  Serial.println("[duplicar] numero= "+String(* puntero));
}