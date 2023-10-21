#include <Servo.h>

Servo myservo;  // Crie um objeto Servo

int pos = 90;  // Posição inicial do servo (90 graus)

void setup() {
  myservo.attach(9);  // Anexa o servo ao pino 9
}

void loop() {
  // Gire o servo da posição 0 graus para 180 graus e vice-versa
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);  // Defina a posição do servo
    delay(15);           // Aguarde um curto período para o servo alcançar a posição
  }
  delay(1000);           // Aguarde 1 segundo na posição 180 graus

  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);  // Defina a posição do servo
    delay(15);           // Aguarde um curto período para o servo alcançar a posição
  }
  delay(1000);           // Aguarde 1 segundo na posição 0 graus
}
