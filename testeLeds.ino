int ledResistor = 8;
int ledSemResistor = 7;

void setup() {
pinMode(ledResistor,OUTPUT);
pinMode(ledSemResistor,OUTPUT);
}
void ligaCR(){
  digitalWrite(ledResistor, HIGH);
}
void ligaSR(){
  digitalWrite(ledSemResistor, HIGH);
}
void loop() {
  ligaCR();
  delay(5000);
  ligaSR();
  delay(5000);
}
