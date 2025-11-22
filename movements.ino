#include <Arduino.h>
#include <movements.h>   // your custom library
// this code is an example of this library with esp32 devkit v1 board
// create object with your motor pins
// Format: move(ENA, IN1, IN2, ENB, IN3, IN4)
int Speed = 200;
move bot(5, 6, 7, 9, 10, 11);  

void setup() {
  Serial.begin(9600);

  bot.speed( Speed);    // set speed (0–255)

  Serial.println("Robot Ready!");
}

void loop() {
  bot.forward();
  delay(2000);

  bot.backward();
  delay(2000);

  bot.left();
  delay(1500);

  bot.right();
  delay(1500);

  bot.stop();
  delay(1000);
}
