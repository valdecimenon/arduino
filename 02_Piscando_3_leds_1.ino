// Piscando 3 leds - versão 1


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

  for (int i=0; i<10; i++){
    digitalWrite(2, HIGH);
   
    delay(50);
   
    //Apaga o led
    digitalWrite(2, LOW);
   
    delay(50);
  }

  for (int i=0; i<10; i++){
    digitalWrite(3, HIGH);
   
    delay(50);
   
    //Apaga o led
    digitalWrite(3, LOW);
   
    delay(50);
  }

  for (int i=0; i<10; i++){
    digitalWrite(4, HIGH);
   
    delay(50);
   
    //Apaga o led
    digitalWrite(4, LOW);
   
    delay(50);
  }
}
