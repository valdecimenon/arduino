// Piscando 3 leds - versão 2


void setup() {
  // Define a porta do led como saida
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop() {
  //Acende o led
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
   
  delay(3000);
   
  //Apaga o led
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
   
  delay(1000);

  piscar(2, 50);
  piscar(3, 50);
  piscar(4, 50);
}


void piscar(int porta, int tempo){
   for (int i=0; i<10; i++){
      // Acende o led
      digitalWrite(porta, HIGH);
      delay(tempo);
      
      // Apaga o led
      digitalWrite(porta, LOW);
      delay(tempo);
   }
}
