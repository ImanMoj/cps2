#include <Wire.h>
#include <LiquidCrystal.h>

  LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
  
void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output

}

void loop() {
  Wire.requestFrom(8, 6);    // request 6 bytes from slave device #8

  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
   //lcd.command(0x028);
   //lcd.clear();
   delay(200);
   lcd.print(c);
   //delay(2000);
   //lcd.home();
   }

  
}



//my config :
//RS = pin12 / RW = pin11 / enable = pin 10
//DB4= pin 5 / DB5= pin 4 / DB6= pin 3 / DB7= pin 2






