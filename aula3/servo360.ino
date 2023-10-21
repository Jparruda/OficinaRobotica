#include <Servo.h>

Servo myservo;  // Crie um objeto Servo

void setup() {
  myservo.attach(9);  // Anexa o servo ao pino 9
}

void loop() {
  // Gire o servo no sentido horário (360 graus)
  myservo.write(0);
  delay(2000);  // Aguarde 2 segundos

  // Gire o servo no sentido anti-horário (360 graus)
  myservo.write(180);
  delay(2000);  // Aguarde 2 segundos
}
