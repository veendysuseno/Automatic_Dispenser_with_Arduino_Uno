#include <HCSR04.h>
#include <Servo.h>

HCSR04 hc(5,6); // Initialisation class HCSR04 (trig pin , echo pin)
Servo myservo;

int jarak = 0;

void setup() {
  myservo.attach(10);
}

void loop() {
  jarak = hc.dist();
  if(jarak <= 6){
    myservo.write(0); 
    delay(200);
  }
  else{
    myservo.write(180);
    delay(1000);
  }
}
