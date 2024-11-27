int cont = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    // Creamos un contador con tu delay de 1seg
      
      Serial.print("Numero : "+string(cont));
      cont++;
      delay(1000);
}