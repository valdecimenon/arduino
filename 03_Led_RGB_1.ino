// Led RGB - versão 1

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

     analogWrite(pinoR, 255);
     delay(1000);
     analogWrite(pinoR, 0);
     delay(500);

     analogWrite(pinoG, 255);
     delay(1000);
     analogWrite(pinoG, 0);
     delay(500);

     analogWrite(pinoB, 255);
     delay(1000);
     analogWrite(pinoB, 0);
     delay(500);

}
