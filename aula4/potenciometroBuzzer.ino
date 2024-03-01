const int pinPot = A5; // Indica a porta analógica ligada ao potenciômetro
const int pinBuzzer = 9; // Indica a porta digital ligada ao buzzer (PWM)

void setup(){
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinPot, INPUT); // Por padrão porta analógica já é INPUT
  Serial.begin(9600);
}

void loop(){
  
  int potValue = analogRead(pinPot); // Lê valores no potenciômetro
  int pwm = map(potValue, 0, 1024, 0, 255); //define valores pwm (0 a 255)
  float volt = potValue * (5.00/1023.0); //Valores da tensão no circuito
  
  Serial.print("V = ");
  Serial.print(potValue);
  Serial.print(" | T = ");
  Serial.print(volt);
  Serial.print(" | PWM = ");
  Serial.println(pwm);

  analogWrite(pinBuzzer, pwm);
     
}