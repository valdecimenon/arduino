// Piscando 01 Led - porta PWM

void setup() {
  // Define a porta do led como saida 
  // qualquer porta ou porta PWM para controle de intensidade
  pinMode(3, OUTPUT); 
}


void loop() {
  // Acende o led lentamente
  for (int i=0; i<255; i++){
     analogWrite(3, i);   
     delay(30);
  }


  // Apaga o led lentamente
  for (int i=255; i>=0; i--){
     analogWrite(3, i);   
     delay(30);
  }
  

}
