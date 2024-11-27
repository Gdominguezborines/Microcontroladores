/*echo
a. Recibir datos por la conexión serial. 
b. Reenviar por dicha conexión los datos recibidos cambiando las mayúsculas por minúsculas y las minúsculas por mayúsculas.
*/
#define DEBUG(a) Serial.println(a);
String frase ="";
int contador=0;

void setup() {
  Serial.begin(9600);
} 

void loop() {

  if (Serial.available()){
    
      String fraseCompleta = Serial.readStringUntil('\n');
      int largo =fraseCompleta.length();
    
      for(int i=0; i<fraseCompleta.length()+1; i++){

      char  data=(char)fraseCompleta.charAt(i);

         if ((data >= 'A'  && data <= 'Z')){
               
                contador++;
                frase+=(char)toLowerCase(data);
               
          }else if ((data >= 'a' && data <= 'z')) {
               
                contador++;
                frase+=(char)toUpperCase(data);
                              
          }else if((!(data >= 'A'  && data <= 'Z') && !(data >= 'a' && data <= 'z')) && contador != largo ){
               
                contador++;
                frase+=((char)data);
                 
          }else{
             
             Serial.println(frase);
             frase ="";
             contador=0;
          }
      }
  }
}
