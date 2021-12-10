// Led RGB - versão 2 - altera a intensidade do RED

// Portas PWM
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

     analogWrite(pinoR, 10);
     delay(200);

     analogWrite(pinoR, 100);
     delay(200);

     analogWrite(pinoR, 150);
     delay(200);

     analogWrite(pinoR, 200);
     delay(200);

     analogWrite(pinoR, 255);
     delay(200);

     analogWrite(pinoR, 200);
     delay(200);

     analogWrite(pinoR, 150);
     delay(200);

     analogWrite(pinoR, 100);
     delay(200);

     analogWrite(pinoR, 10);
     delay(200);
}
