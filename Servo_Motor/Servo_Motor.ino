# include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9, 600, 2300);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(0);
  delay(1000);

  servo.write(30);
  delay(1000);

  servo.write(60);
  delay(1000);

  servo.write(90);
  delay(1000);

  servo.write(120);
  delay(1000);

  servo.write(150);
  delay(1000);

  servo.write(180);
  delay(1000);

  
}
