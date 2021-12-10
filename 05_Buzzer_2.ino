// 05 Buzzer - versão 2 - sirene

#define tempo 10
int frequencia = 0;
int pinoSpeaker = 10;

void setup()
{
  pinMode(pinoSpeaker, OUTPUT);
}

void loop()
{
  for (frequencia = 150; frequencia < 1800; frequencia += 1) 
  {
    tone(pinoSpeaker, frequencia, tempo); 
    delay(1);
  }
  
  for (frequencia = 1800; frequencia > 150; frequencia -= 1) 
  {
    tone(pinoSpeaker, frequencia, tempo); 
    delay(1);
  }
}
