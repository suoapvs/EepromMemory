/*
  Eeprom Memory Reading

  Read a some values from the eeprom memory 
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
  const EepromMemory* memory = new EepromMemory();
  const byte byteValue = memory->readByte(BYTE_ADDRESS);
  const boolean booleanValue = memory->readBoolean(BOOLEAN_ADDRESS);
  const char charValue = memory->readChar(CHAR_ADDRESS);
  const int intValue = memory->readInt(INT_ADDRESS);
  const long longValue = memory->readLong(LONG_ADDRESS);
  const float floatValue = memory->readFloat(FLOAT_ADDRESS);
  const double doubleValue = memory->readDouble(DOUBLE_ADDRESS);

  Serial.begin(9600);
  Serial.println("Byte: " + String(byteValue));
  Serial.println("Boolean: " + String(booleanValue));
  Serial.println("Char: " + String(charValue));
  Serial.println("Int: " + String(intValue));
  Serial.println("Long: " + String(longValue));
  Serial.println("Float: " + String(floatValue));
  Serial.println("Double: " + String(doubleValue));
}

void loop() {

}

