# EepromMemory Library

For Arduino boards.

The Library implements a set of methods for reading and writing data in a memory. Provides an object-oriented interface for reading and writing data in a memory, using the "[EEPROM.h](https://www.arduino.cc/en/Reference/EEPROM)" "library.

## Installation

1. [Download](https://github.com/YuriiSalimov/EepromMemory/releases) the Latest release from GitHub.
2. Unzip and modify the Folder name to "EepromMemory" (Remove the '-version').
3. Paste the modified folder on your Library folder (On your `libraries` folder inside Sketchbooks or Arduino software).
4. Restart the Arduino IDE.

## Methods

```cpp
	//Instantiation:
	Memory memory();

	// Read data:
	const byte byteValue = memory.readByte(BYTE_ADDRESS);
	const boolean booleanValue = memory.readBoolean(BOOLEAN_ADDRESS);
	const char charValue = memory.readChar(CHAR_ADDRESS);
	const int intValue = memory.readInt(INT_ADDRESS);
	const long longValue = memory.readLong(LONG_ADDRESS);
	const float floatValue = memory.readFloat(FLOAT_ADDRESS);
	const double doubleValue = memory.readDouble(DOUBLE_ADDRESS);

	// Write data:
	memory.writeByte(BYTE_ADDRESS, byteValueOut);
	memory.writeBoolean(BOOLEAN_ADDRESS, booleanValueOut);
	memory.writeChar(CHAR_ADDRESS, charValueOut);
	memory.writeInt(INT_ADDRESS, intValueOut);
	memory.writeLong(LONG_ADDRESS, longValueOut);
	memory.writeFloat(FLOAT_ADDRESS, floatValueOut);
	memory.writeDouble(DOUBLE_ADDRESS, doubleValueOut);

    // BYTE_ADDRESS, ..., DOUBLE_ADDRESS - the data addresses in a memory.
```

See [examples](/examples)...

Created by Yurii Salimov.
