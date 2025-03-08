#include <Arduino.h>
void setup() {
// write your initialization code here
Serial.begin(9600);
}

void loop() {
//    Serial.println("Do I have you?");
//    delay(1000);
// write your code here
    digitalWrite(LED_BUILTIN, HIGH);  // Turn the RGB LED white
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);  // Turn the RGB LED off
    delay(1000);


}