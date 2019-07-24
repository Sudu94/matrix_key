
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

const byte rows=4;
const byte colm=3;

char keys[rows][colm]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowsPins[rows]={11,10,9,8};
byte rowsPins[colm]={7,6,5,4};
keypad keypad =keypad(makekeymap(keys),rowPins,colpins,rows,cols);
LiquidCrystal_I2C lcd(0*3F,20,4);
void setup()
{
 lcd.init();
 lcd.setCursor(3,0);
 lcd.print("you pressed");
}
void loop()
{
  char key=keypad.getkey();
  if(int(key)!=0)
  {
    lcd.setCursor(16,0);
    lcd.print(key);
  }
}



