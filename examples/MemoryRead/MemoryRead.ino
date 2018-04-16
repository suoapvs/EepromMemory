/*
  Eeprom Memory Reading

  Read a some values from the eeprom memory 
  and displays it in the default Serial.

  https://github.com/YuriiSalimov/EepromMemory

  Created by Yurii Salimov, April, 2018.
  Released into the public domain.
*/
#include <EepromMemory.h>

// Addresses of a values in the memory.
#define BYTE_ADDRESS    0
#define BOOLEAN_ADDRESS 1
#define CHAR_ADDRESS    2
#define INT_ADDRESS     3
#define LONG_ADDRESS    5
#define FLOAT_ADDRESS   9
#define DOUBLE_ADDRESS  13

// the setup function runs once when you press reset or power the board
void setup() {
  const EepromMemory* memory = new EepromMemory();
  // Reading values
  const byte byteValue = memory->readByte(BYTE_ADDRESS);
  const boolean booleanValue = memory->readBoolean(BOOLEAN_ADDRESS);
  const char charValue = memory->readChar(CHAR_ADDRESS);
  const int intValue = memory->readInt(INT_ADDRESS);
  const long longValue = memory->readLong(LONG_ADDRESS);
  const float floatValue = memory->readFloat(FLOAT_ADDRESS);
  const double doubleValue = memory->readDouble(DOUBLE_ADDRESS);

  Serial.begin(9600);
  // Displays results in the default Serial.
  Serial.println("Byte: " + String(byteValue));
  Serial.println("Boolean: " + String(booleanValue));
  Serial.println("Char: " + String(charValue));
  Serial.println("Int: " + String(intValue));
  Serial.println("Long: " + String(longValue));
  Serial.println("Float: " + String(floatValue));
  Serial.println("Double: " + String(doubleValue));
}

void loop() {
  // not used
}

