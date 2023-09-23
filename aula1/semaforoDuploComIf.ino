//definir portas
int pare = 8;
int atencao = 9;
int siga = 10;
int pedSiga = 2;
int pedPare = 3;

void setup() {
    pinMode(pare, OUTPUT);
    pinMode(atencao, OUTPUT);
    pinMode(siga, OUTPUT);
    pinMode(pedSiga, OUTPUT);
    pinMode(pedPare, OUTPUT);
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

void pedestreSegue() {
  digitalWrite(pedSiga, HIGH);
  digitalWrite(pedPare, LOW);
}

void pedestrePare() {
  digitalWrite(pedSiga, LOW);
  digitalWrite(pedPare, HIGH);
}

void semaforo() {
  static int ledOrder = 0;

  ledOrder = ledOrder +1;

  if (ledOrder == 1) {
    sinalVerde();
    pedestrePare();
    delay(5000);
  }
  else if (ledOrder == 2) {
    sinalAmarelo();
    delay(2500);
  }
  else {
    sinalVermelho();
    pedestreSegue();;
    delay(5000);

    ledOrder = 0;
  }
}


void loop() {
  semaforo();
}               