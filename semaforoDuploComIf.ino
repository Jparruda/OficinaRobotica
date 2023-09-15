//definir portas
int pare = 8;
int atencao = 9;
int siga = 10;
int pedSiga = 3;
int pedPare = 2;

void setup() {
    pinMode(pare, OUTPUT);
    pinMode(atencao, OUTPUT);
    pinMode(siga, OUTPUT);
    pinMode(pedSiga, OUTPUT);
    pinMode(pedPare, OUTPUT);
}

void pedestreSiga(){
    digitalWrite(pedPare, LOW);
    digitalWrite(pedSiga, HIGH);
}

void pedestrePare(){
    digitalWrite(pedPare, HIGH);
    digitalWrite(pedSiga, LOW);
}

void sinalVermelho() {
    if(pare == HIGH){
        pedestreSiga();
    }
    digitalWrite(pare, HIGH);
    digitalWrite(atencao, LOW);
    digitalWrite(siga, LOW);

}

void sinalVerde() {
    if(siga == HIGH){
        pedestrePare();
    }
    digitalWrite(pare, LOW);
    digitalWrite(atencao, LOW);
    digitalWrite(siga, HIGH);

}

void sinalAmarelo() {
    if(atencao == HIGH){
        pedestreSiga();
    }
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