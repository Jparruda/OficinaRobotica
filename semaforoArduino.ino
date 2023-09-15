//definir portas
int pare = 8;
int atencao = 9;
int siga = 10;
// int pedSiga = 3;
// int pedPare = 2;

void setup() {
  pinMode(pare, OUTPUT);
  pinMode(atencao, OUTPUT);
  pinMode(siga, OUTPUT);
  // pinMode(pedSiga, OUTPUT);
  // pinMode(pedPare, OUTPUT);
}

void sinalVermelho() {
  digitalWrite(pare, HIGH);
  digitalWrite(atencao, LOW);
  digitalWrite(siga, LOW);
  // digitalWrite(pedPare, LOW);
  // digitalWrite(pedSiga, HIGH);
}

void sinalVerde() {
  digitalWrite(pare, LOW);
  digitalWrite(atencao, LOW);
  digitalWrite(siga, HIGH);
  // digitalWrite(pedPare, HIGH);
  // digitalWrite(pedSiga, LOW);
}

void sinalAmarelo() {
  digitalWrite(pare, LOW);
  digitalWrite(atencao, HIGH);
  digitalWrite(siga, LOW);
  // digitalWrite(pedPare, LOW);
  // digitalWrite(pedSiga, HIGH);
  // for (int i = 1000; i<= 3000; i=+1000){
  //   digitalWrite(pedSiga, HIGH);
  // }

}

void loop() {
  // put your main code here, to run repeatedly:
  sinalAmarelo();
  delay(5000);
  sinalVermelho();
  delay(6000);
  sinalVerde();
  delay(6000);
}
