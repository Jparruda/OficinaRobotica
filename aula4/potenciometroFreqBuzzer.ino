const int pinPot = A5; // Indica a porta analógica ligada ao potenciômetro
const int pinBuzzer = 7; // Indica a porta digital ligada ao buzzer
const int time = 70; // Define o tempo em ms de cada tone

void setup(){
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinPot, INPUT); // Por padrão porta analógica é sempre INPUT
  Serial.begin(9600); 
}

void loop(){
  int potValue = analogRead(pinPot); // Lê valores no potenciômetro
  int frequency = map(potValue, 0, 1023, 0, 2500); //define valores de frequência
  float volt = potValue * (5.00/1023.0); //Valores da tensão no circuito
  
  Serial.print("P = ");
  Serial.print(potValue);
  Serial.print(" | T = ");
  Serial.print(volt);
  Serial.print(" | F = ");
  Serial.println(frequency);

  tone(pinBuzzer, frequency, time);
}