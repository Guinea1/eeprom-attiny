#include <EEPROM.h>
#include "DigiKeyboard.h"

int a = 0;
int value;

void setup()
{

}

void loop()
{
  value = EEPROM.read(a);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.print(a);
  DigiKeyboard.print("\t");
  DigiKeyboard.print(value);
  DigiKeyboard.println();

  a = a + 1;

  if (a == 512)
    a = 0;

  delay(500);
}
