int pinoLED = 13;  
int numeroAleatorio = random(100, 1000);  

void setup() {
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  digitalWrite(pinoLED, HIGH);
  delay(numeroAleatorio);
  digitalWrite(pinoLED, LOW);
  delay(numeroAleatorio);
}
