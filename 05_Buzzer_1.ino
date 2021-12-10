// 05 Buzzer - versão 1

// ligar polo + na porta 10 e negativo do resistor no GND
const int pino = 10;  // buzzer no pino 10


void setup(){
 
  pinMode(pino, OUTPUT); 

}

void loop(){
 
  tone(pino, 1000);   // Envia um sinal de 1 KHz
  delay(1000);
  
  noTone(pino);      // Para o som
  delay(1000);
  
}
