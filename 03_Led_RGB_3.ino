// Led RGB - versão 3 - cria cores

// portas PWM
int pinoR = 3; 
int pinoG = 5; 
int pinoB = 6; 


void setup(){
  delay(5000);
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
}
 
void loop(){

  mudaCor(255, 0, 0); // vermelho
  delay(1000);
  
  mudaCor(0, 255, 0); // verde
  delay(1000);
  
  mudaCor(0, 0, 255); // azul
  delay(1000);
  
  mudaCor(255, 255, 0); // amarelo
  delay(1000); 
  
  mudaCor(80, 0, 80); // violeta
  delay(1000);
  
  mudaCor(0, 255, 255); //azul aqua
  delay(1000);

}


void mudaCor(int vermelho, int verde, int azul){
  analogWrite(pinoR, vermelho);
  analogWrite(pinoG, verde); 
  analogWrite(pinoB, azul);
}
