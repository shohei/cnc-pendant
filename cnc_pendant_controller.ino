#include <Keyboard.h>
#define LEFT_PIN 2
#define RIGHT_PIN 3
#define UP_PIN 4
#define DOWN_PIN 5

void setup() {
  pinMode(LEFT_PIN,INPUT);
  pinMode(RIGHT_PIN,INPUT);  
  pinMode(UP_PIN,INPUT);
  pinMode(DOWN_PIN,INPUT);
  Keyboard.begin();
  delay(1);
}

void loop() {  
  if(digitalRead(LEFT_PIN)==HIGH){
    Keyboard.write(KEY_LEFT_ARROW);
  } else if (digitalRead(RIGHT_PIN)==HIGH) {
    Keyboard.write(KEY_RIGHT_ARROW);    
  } else if (digitalRead(UP_PIN)==HIGH) {
    Keyboard.write(KEY_UP_ARROW);
  } else if (digitalRead(DOWN_PIN)==HIGH) {
    Keyboard.write(KEY_DOWN_ARROW);
  }
}
