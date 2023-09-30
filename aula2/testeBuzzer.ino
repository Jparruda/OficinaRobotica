int buzzerPin = 9; 
void setup() {
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  tone(buzzerPin, 1000); 
  delay(1000); 
  noTone(buzzerPin); 
  delay(1000); 
}