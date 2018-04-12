/*
  Eeprom Memory Writing / Reading

  Write and Read a some values from the eeprom memory 
  and displays it in the default Serial.

  https://github.com/YuriiSalimov/Encoder

  Created by Yurii Salimov, April, 2018.
  Released into the public domain.
*/
#include <EepromMemory.h>

#define BYTE_ADDRESS    0
#define BOOLEAN_ADDRESS 1
#define CHAR_ADDRESS    2
#define INT_ADDRESS     3
#define LONG_ADDRESS    5
#define FLOAT_ADDRESS   9
#define DOUBLE_ADDRESS  13

void setup() {
  const byte byteValueOut = 12;
  const boolean booleanValueOut = true;
  const char charValueOut = 'Y';
  const int intValueOut = 1313;
  const long longValueOut = 14010;
  const float floatValueOut = 125.225;
  const double doubleValueOut = 1313.323;

  const EepromMemory* memory = new EepromMemory();
  memory->writeByte(BYTE_ADDRESS, byteValueOut);
  memory->writeBoolean(BOOLEAN_ADDRESS, booleanValueOut);
  memory->writeChar(CHAR_ADDRESS, charValueOut);
  memory->writeInt(INT_ADDRESS, intValueOut);
  memory->writeLong(LONG_ADDRESS, longValueOut);
  memory->writeFloat(FLOAT_ADDRESS, floatValueOut);
  memory->writeDouble(DOUBLE_ADDRESS, doubleValueOut);

  const byte byteValueIn = memory->readByte(BYTE_ADDRESS);
  const boolean booleanValueIn = memory->readBoolean(BOOLEAN_ADDRESS);
  const char charValueIn = memory->readChar(CHAR_ADDRESS);
  const int intValueIn = memory->readInt(INT_ADDRESS);
  const long longValueIn = memory->readLong(LONG_ADDRESS);
  const float floatValueIn = memory->readFloat(FLOAT_ADDRESS);
  const double doubleValueIn = memory->readDouble(DOUBLE_ADDRESS);

  Serial.begin(9600);
  Serial.println("Byte: " + String(byteValueOut) + " -> " + String(byteValueIn));
  Serial.println("Boolean: " + String(booleanValueOut) + " -> " + String(booleanValueIn));
  Serial.println("Char: " + String(charValueOut) + " -> " + String(charValueIn));
  Serial.println("Int: " + String(intValueOut) + " -> " + String(intValueIn));
  Serial.println("Long: " + String(longValueOut) + " -> " + String(longValueIn));
  Serial.println("Float: " + String(floatValueOut) + " -> " + String(floatValueIn));
  Serial.println("Double: " + String(doubleValueOut) + " -> " + String(doubleValueIn));
}

void loop() {

}

