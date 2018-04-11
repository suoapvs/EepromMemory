# EepromMemory Library

For Arduino boards.

The Library implements a set of methods for reading and writing data in a memory. Provides an object-oriented interface for reading and writing data in a memory, using the EEPROM library.

## Installation

1. [Download](https://github.com/YuriiSalimov/EepromMemory/releases) the Latest release from GitHub.
2. Unzip and modify the Folder name to "EepromMemory" (Remove the '-version').
3. Paste the modified folder on your Library folder (On your `libraries` folder inside Sketchbooks or Arduino software).
4. Restart the Arduino IDE.

## Methods

```cpp
	//Instantiation:
	AnalogSensor sensor(ANALOG_PIN);
    Memory memory();

	// Read data:
	int data = memory.readInt(ADDRESS);
	...

	// Write data:
	memory.writeInt(data, ADDRESS);
	...

    // ADDRESS - the data address in a memory.
```

Created by Yurii Salimov.
