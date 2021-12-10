// Piscando 01 Led 

void setup() {
  // Define a porta do led como saida 
  pinMode(2, OUTPUT); 
}


void loop() {
  // Acende o led
  digitalWrite(2, HIGH);
   
  delay(3000);
   
  // Apaga o led
  digitalWrite(2, LOW);
   
  delay(1000);
}
