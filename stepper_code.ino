#include <Stepper.h> 
int spr=90;
Stepper moto( spr,8,9,10,11);
void setup() {
moto.setSpeed(60);
 
}
void loop() {
 moto.step(spr*2); 
 delay(500);
 moto.step(-spr*2);
 delay(500); 
}
