#include <Servo.h>

Servo first_finger;
Servo middle_finger;
Servo ring_finger;
Servo pinkie_finger;
Servo thumb;

void setup() {
  thumb.attach(6);
  first_finger.attach(5);
  middle_finger.attach(4);
  ring_finger.attach(3);
  pinkie_finger.attach(2);

  thumb.write(0);
  first_finger.write(200);
  middle_finger.write(200);
  ring_finger.write(200);
  pinkie_finger.write(200);

}

void loop() {
  // Hot Cross Buns  
  ring_finger.write(0);
  delay(600);
  middle_finger.write(0);
  delay(600);
  first_finger.write(0);
  delay(800);
  ring_finger.write(200);
  middle_finger.write(200);
  first_finger.write(200);
  delay(400);

  // Hot Cross Buns  
  ring_finger.write(0);
  delay(600);
  middle_finger.write(0);
  delay(600);
  first_finger.write(0);
  delay(800);
  ring_finger.write(200);
  middle_finger.write(200);
  first_finger.write(200);
  delay(400);
  
  // one potato two potato
  first_finger.write(0);
  delay(200);
  first_finger.write(200);
  delay(200);
  first_finger.write(0);
  delay(200);
  first_finger.write(200);
  delay(200);
  first_finger.write(0);
  delay(200);
  first_finger.write(200);
  delay(200);
  first_finger.write(0);
  delay(200);
  first_finger.write(200);
  delay(200);

  middle_finger.write(0);
  delay(200);
  middle_finger.write(200);
  delay(200);
  middle_finger.write(0);
  delay(200);
  middle_finger.write(200);
  delay(200);
  middle_finger.write(0);
  delay(200);
  middle_finger.write(200);
  delay(200);
  middle_finger.write(0);
  delay(200);
  middle_finger.write(200);
  delay(200);

  // Hot Cross Buns  
  ring_finger.write(0);
  delay(600);
  middle_finger.write(0);
  delay(600);
  first_finger.write(0);
  delay(800);
  ring_finger.write(200);
  middle_finger.write(200);
  first_finger.write(200);
  delay(400);
}
