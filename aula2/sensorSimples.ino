const int sensorPin = 2; // Pino digital onde o sensor de linha está conectado

void setup() {
  pinMode(sensorPin, INPUT); // Configura o pino do sensor como entrada
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Lê o estado do sensor (HIGH ou LOW)
  if (sensorValue == HIGH) {
    Serial.println("Linha detectada");
  } else {
    Serial.println("Linha não detectada");
  }
  delay(100);
}

