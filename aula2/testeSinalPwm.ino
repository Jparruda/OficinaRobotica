int ledPin = 6; 
int intensidade = 0; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  analogWrite(ledPin, intensidade); 
  delay(10); 
  intensidade = (intensidade + 1) % 256; 
}
