/*  millis
a. Repetir el ejercicio 2 usando la función millis().
*/

uint64_t ultimaImpresion = 0;
int cont = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
  // Creamos un contador pero usamos temporizaciones mediante consulta de ciclos millis()  micros()
  
  uint64_t momentoActual = millis();
  

  if((momentoActual - ultimaImpresion)>1000){
      Serial.println("Numero : "+String(cont));
      cont++;
      ultimaImpresion =momentoActual;
  }
}
