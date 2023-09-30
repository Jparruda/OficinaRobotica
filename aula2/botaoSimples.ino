const int buttonPin = 2; 
const int ledPin = 13;  

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);         
}

void loop() {
  int buttonState = digitalRead(buttonPin); 

  if (buttonState == LOW) { 
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW); 
  }
}
