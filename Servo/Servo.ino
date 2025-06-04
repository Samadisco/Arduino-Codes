#include <Servo.h>
Servo myservo;


void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  myservo.attach(11);
  myservo.write(0);
  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<=180; i+=10){
    myservo.write(i);
    delay(500)
  }

}

// OPPOSITE

// void setup() {
//   // put your setup code here, to run once:
//   pinMode(11, OUTPUT);
//   myservo.attach(11);
//   myservo.write(0);
//   delay(500);

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   for (int i=180; i>=0; i-=10){
//     myservo.write(i);
//     delay(500)
//   }

// }
