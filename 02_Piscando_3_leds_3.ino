// Piscando 3 leds - versão 3 - sirene

int tempo = 1000;

void setup() {
  // Define a porta do led como saida
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop() {
  digitalWrite(2, HIGH);
  delay(tempo);
  digitalWrite(2, LOW);
  
  digitalWrite(3, HIGH);
  delay(tempo);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  delay(tempo);
  digitalWrite(4, LOW);

  if (tempo > 50){
     tempo -= 50;
  }
}
