const int buttonPin = 2;  
const int ledPin = 13;    

void setup() {
  pinMode(buttonPin, INPUT);   
  pinMode(ledPin, OUTPUT);    
  Serial.begin(9600);         
}

void loop() {
  int buttonState = digitalRead(buttonPin); 

  switch (buttonState) {
    case HIGH:
      digitalWrite(ledPin, HIGH); 
      Serial.println("LED ligado");
      break;

    case LOW:
      digitalWrite(ledPin, LOW);  
      Serial.println("LED desligado");
      break;
  }
}
