const int sensorPin = 2; // Pino digital onde o sensor está conectado

void setup() {
  pinMode(sensorPin, INPUT); // Configura o pino como entrada digital
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Lê o valor digital do sensor

  if (sensorValue == HIGH) {
    Serial.println("Linha detectada!"); // Se a entrada for HIGH, a linha é detectada
  } else {
    Serial.println("Nenhuma linha detectada"); // Caso contrário, a linha não é detectada
  }

  delay(100); // Aguarda um curto período de tempo antes de fazer a próxima leitura
}
