/*
a. El contador ctr1 se incrementará 10 veces por segundo 
b. El contador ctr2 se incrementará 1 vez cada 2 segundos. 
c. Cuando se incremente ctr2 se descontará el valor de dicho contador de ctr1. 
d. Cada vez que uno de los dos contadores se incremente se imprimirá con el formato
   C1: {valor del contador 1} C2: {valor del contador 2}. e. Usar la función delay.
*/

int ctr1 = 0;
int ctr2 = 0;
int seg = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  //Saca el contador 10 veces e 1 seg por pantalla
    
    for(int i=0; i<10; i++){
      ctr1++;
      imprimir();
    }
  
  //Si entra en la condicion aumenta el 2º contador cada dos seg, resta al 1º contador el valor del 2º y lo saca por pantalla
  
    if(seg%2==0 ){
      
        ctr2++;
        ctr1-ctr2;
        imprimir();
    }
  
  //variable de segundos 
  
    seg++;
    delay(1000);
}

void imprimir(){
  
  //funcion para mostrar los datos 
  
    Serial.print("C1 : "+string(ctr1));
    Serial.print("C2 : "+string(ctr2));

}
