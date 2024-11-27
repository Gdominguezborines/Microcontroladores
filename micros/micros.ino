/*micros
a. Repetir el ejercicio 3 usando la función micros().

Ej3 consistia en:
a. El contador ctr1 se incrementará 10 veces por segundo 
b. El contador ctr2 se incrementará 1 vez cada 2 segundos. 
c. Cuando se incremente ctr2 se descontará el valor de dicho contador de ctr1. 
d. Cada vez que uno de los dos contadores se incremente se imprimirá con el formato
   C1: {valor del contador 1} C2: {valor del contador 2}. e. Usar la función delay.
*/

int ctr1 = 0;
int ctr2 = 0;
int seg = 0;
unsigned long tiempo = 0;
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
tiempo=micros()/1000000;
 
  //Saca el contador 10 veces e 1 seg por pantalla
    if(tiempo%2!=0 ){
      for(int i=0; i<10; i++){
         ctr1++;
        imprimir(1);
      }
    }
  //Si entra en la condicion aumenta el 2º contador cada dos seg, resta al 1º contador el valor del 2º y lo saca por pantalla
 
    if(tiempo%2==0 && tiempo >0 ){
      
        ctr2++;
        ctr1-ctr2;
        imprimir(2);
    }
   
    delay(1000);
}

void imprimir(int segImpares){
  //funcion para mostrar los datos 
  if (segImpares==1){
      Serial.println("C1 : "+ String(ctr1));
  }else{
     Serial.println("C1 : "+ String(ctr1));
     Serial.println("C2 : "+ String(ctr2));
       
  }
}