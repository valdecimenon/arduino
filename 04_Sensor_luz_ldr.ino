// 04 Sensor de Luz LDR com led

// Ligar sensor LDR com resistor no 5V e porta analógica A0
// Ligar LED com resistor no GND e porta digital 2
 
void setup(){
  //Ativando o serial monitor que exibirá os valores lidos no sensor.
  Serial.begin(9600);
   
  // Led de saida
  pinMode(2, OUTPUT);
}
 

void loop(){
   
  // Le o valor do sensor
  int valorSensor = analogRead(A0);  // conectado no A0

  if (valorSensor < 1023){
    digitalWrite(2, HIGH);
  }
     
  // Exibindo o valor do sensor no serial monitor.
  Serial.println(valorSensor);
   
  delay(100); 
}
 
