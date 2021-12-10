// Exercício 05 Buzzer - versão 3 - Despacito

#define PORTA_SPEAKER 10
#define INTERVALO 160
#define NOTA_ESPACAMENTO 16

const uint16_t FREQUENCIAS[]={0,31,33,35,37,39,41,44,46,49,52,55,58,62,65,69,73,78,82,87,93,98,104,110,117,123,131,139,147,156,165,175,185,196,208,220,
                              233,247,262,277,294,311,330,349,370,392,415,440,466,494,523,554,587,622,659,698,740,784,831,880,932,988,1047,1109,1175,1245,
                              1319,1397,1480,1568,1661,1760, 1865,1976,2093,2217,2349,2489,2637,2794,2960,3136,3322,3520,3729,3951,4186,4435,4699,4978};
                              
const uint16_t SOM_COMPRIMENTO=64;

// são as notas a serem reproduzidas: uma lista de deslocamentos de 8 bits a serem usados ​​para acessar a matriz FREQUENCIAS
const uint8_t NOTAS[]={52,0,0,0,51,0,0,0,49,0,44,0,44,44,44,44,44,49,49,49,49,0,47,49,0,0,45,0,45,45,45,45,
                       45,49,49,49,49,0,51,52,0,0,47,0,47,47,47,47,52,51,52,51,52,0,54,54,0,51,0,0,0,0,0,0};

// duração das notas
const uint8_t DURACAO[]={4,0,0,0,4,0,0,0,2,0,1,0,1,1,1,1,1,1,1,1,2,0,1,1,0,0,1,0,1,1,1,1,1,1,1,1,2,0,1,1,0,0,1,0,1,1,1,1,1,1,1,1,2,0,1,2,0,3,0,0,0,0,0};

void setup() {
  pinMode(PORTA_SPEAKER, OUTPUT);
}

uint16_t ctr=0, t=0;
void loop() {
   t=millis();
   if(DURACAO[ctr]!=0){
      noTone(PORTA_SPEAKER);
      if(NOTAS[ctr]!=0){
         tone(PORTA_SPEAKER, FREQUENCIAS[NOTAS[ctr]], DURACAO[ctr] * INTERVALO - NOTA_ESPACAMENTO);
      }
   }
  
  
   ctr=(ctr+1)%SOM_COMPRIMENTO;
   delay(INTERVALO - (millis() - t));
}
