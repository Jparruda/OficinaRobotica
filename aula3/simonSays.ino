const int vermelhoLED = 2;
const int verdeLED = 3;
const int azulLED = 4;
const int amareloLED = 5;
const int botao = 6;

int sequencia[] = {vermelhoLED, verdeLED, azulLED, amareloLED};
int sequenciaJogador[4];
int rodada = 0;
int estadoBotao = LOW;
int ultimoEstadoBotao = LOW;

void setup() {
  pinMode(vermelhoLED, OUTPUT);
  pinMode(verdeLED, OUTPUT);
  pinMode(azulLED, OUTPUT);
  pinMode(amareloLED, OUTPUT);
  pinMode(botao, INPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop() {
  if (rodada == 0) {
    // Gera um novo padrão
    for (int i = 0; i < 4; i++) {
      int corAleatoria = random(0, 4);
      sequencia[i] = corAleatoria;
    }
  }
  
  for (int i = 0; i <= rodada; i++) {
    digitalWrite(sequencia[i], HIGH);
    delay(500);
    digitalWrite(sequencia[i], LOW);
    delay(500);
  }
  
  // Agora é a vez do jogador repetir a sequência
  for (int i = 0; i <= rodada; i++) {
    int corPressionada = aguardarBotaoPressionado();
    sequenciaJogador[i] = corPressionada;
    delay(500);
  }
  
  // Verifica se o jogador acertou a sequência
  bool sequenciaCorreta = true;
  for (int i = 0; i <= rodada; i++) {
    if (sequencia[i] != sequenciaJogador[i]) {
      sequenciaCorreta = false;
      break;
    }
  }
  
  if (sequenciaCorreta) {
    Serial.println("Rodada " + String(rodada + 1) + " - Correto!");
    rodada++;
    delay(1000);
  } else {
    Serial.println("Fim de Jogo - Você chegou até a rodada " + String(rodada));
    while (true);  // Fim do jogo
  }
}

int aguardarBotaoPressionado() {
  int corPressionada = 0;
  
  while (corPressionada == 0) {
    estadoBotao = digitalRead(botao);
    if (estadoBotao != ultimoEstadoBotao) {
      if (estadoBotao == HIGH) {
        corPressionada = determinarCorPressionada();
        digitalWrite(corPressionada, HIGH);
        delay(300);
        digitalWrite(corPressionada, LOW);
      }
    }
    ultimoEstadoBotao = estadoBotao;
  }
  
  return corPressionada;
}

int determinarCorPressionada() {
  int valorBotao = analogRead(A0);
  if (valorBotao < 100) {
    return vermelhoLED;
  } else if (valorBotao >= 100 && valorBotao < 300) {
    return verdeLED;
  } else if (valorBotao >= 300 && valorBotao < 500) {
    return azulLED;
  } else if (valorBotao >= 500) {
    return amareloLED;
  }
}
