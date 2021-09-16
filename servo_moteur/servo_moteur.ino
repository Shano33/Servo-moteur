
#include <Servo.h>

Servo servo;
Servo servo1;

int a = 1;

void setup()
{
  servo.attach(8);
  servo.write(0);
  delay(2000);

  servo1.attach(10);
  servo1.write(0);
  delay(2000);
}

void loop()
{

  servo.write(120);
  delay(1000);
  servo.write(0);
  delay(1000);

  if (a = 1)
    ;
  {
    servo1.write(120);
    delay(1000);
    servo1.write(0);
    delay(1000);
  }
}
