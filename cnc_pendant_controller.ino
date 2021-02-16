#include <Keyboard.h>
#define PRESS_MS 10
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
    
}

void left(){
  Keyboard.press(KEY_LEFT_ARROW);
  delay(PRESS_MS);  
  Keyboard.releaseAll();
}

void right(){
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(PRESS_MS);  
  Keyboard.releaseAll();  
}

void up(){
  Keyboard.press(KEY_UP_ARROW);
  delay(PRESS_MS);  
  Keyboard.releaseAll();
}

void down(){
  Keyboard.press(KEY_DOWN_ARROW);
  delay(PRESS_MS);  
  Keyboard.releaseAll();
}
