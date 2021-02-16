#include <Keyboard.h>
#define LEFT_PIN 2
#define RIGHT_PIN 3
#define UP_PIN 4
#define DOWN_PIN 5
#define DELAY_MS 100

void setup() {
  Serial.begin(115200);
  pinMode(LEFT_PIN,INPUT_PULLUP);
  pinMode(RIGHT_PIN,INPUT_PULLUP);  
  pinMode(UP_PIN,INPUT_PULLUP);
  pinMode(DOWN_PIN,INPUT_PULLUP);
  Keyboard.begin();
  delay(1);
  
}

void loop() {  
  if(digitalRead(LEFT_PIN)==LOW){
    Serial.println("left");
    Keyboard.write(KEY_LEFT_ARROW);
    delay(DELAY_MS);
  } else if (digitalRead(RIGHT_PIN)==LOW) {
    Serial.println("right");
    Keyboard.write(KEY_RIGHT_ARROW);    
    delay(DELAY_MS);
  } else if (digitalRead(UP_PIN)==LOW) {
    Serial.println("up");
    Keyboard.write(KEY_UP_ARROW);
        delay(DELAY_MS);
  } else if (digitalRead(DOWN_PIN)==LOW) {
    Serial.println("down");
    Keyboard.write(KEY_DOWN_ARROW);
        delay(DELAY_MS);

  }
}
