//definir portas
int pare = 8;
int atencao = 9;
int siga = 10;

void setup() {
  pinMode(pare, OUTPUT);
  pinMode(atencao, OUTPUT);
  pinMode(siga, OUTPUT);
}

void sinalVermelho() {
  digitalWrite(pare, HIGH);
  digitalWrite(atencao, LOW);
  digitalWrite(siga, LOW);
}

void sinalVerde() {
  digitalWrite(pare, LOW);
  digitalWrite(atencao, LOW);
  digitalWrite(siga, HIGH);
}

void sinalAmarelo() {
  digitalWrite(pare, LOW);
  digitalWrite(atencao, HIGH);
  digitalWrite(siga, LOW);
}

void loop() {
  sinalAmarelo();
  delay(5000);
  sinalVermelho();
  delay(6000);
  sinalVerde();
  delay(6000);
}