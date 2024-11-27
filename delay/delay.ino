int cont = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    // Creamos un contador con tu delay de 1seg
      
      Serial.println("Numero : "+String(cont));
      cont++;
      delay(1000);
}