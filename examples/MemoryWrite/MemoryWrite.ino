#include <EepromMemory.h>

#define BYTE_ADDRESS    0
#define BOOLEAN_ADDRESS 1
#define CHAR_ADDRESS    2
#define INT_ADDRESS     3
#define LONG_ADDRESS    5
#define FLOAT_ADDRESS   9
#define DOUBLE_ADDRESS  13

void setup() {
  const byte byteValue = 12;
  const boolean booleanValue = true;
  const char charValue = 'Y';
  const int intValue = 1313;
  const long longValue = 14010;
  const float floatValue = 125.225;
  const double doubleValue = 1313.323;

  const EepromMemory* memory = new EepromMemory();
  memory->writeByte(BYTE_ADDRESS, byteValue);
  memory->writeBoolean(BOOLEAN_ADDRESS, booleanValue);
  memory->writeChar(CHAR_ADDRESS, charValue);
  memory->writeInt(INT_ADDRESS, intValue);
  memory->writeLong(LONG_ADDRESS, longValue);
  memory->writeFloat(FLOAT_ADDRESS, floatValue);
  memory->writeDouble(DOUBLE_ADDRESS, doubleValue);
}

void loop() {

}
