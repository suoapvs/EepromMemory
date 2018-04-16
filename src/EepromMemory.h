/**
	EepromMemory.h - The Library implements a set of methods 
	for reading and writing data in a memory, 
	using the EEPROM library.

	Instantiation:
		Memory memory();

	Read data:
		int data = memory.readInt(ADDRESS);
	
	Write data:
		memory.writeInt(DATA, ADDRESS);
		
	where DATA - data for writing,
	ADDRESS - DATA address in a memory.

	https://github.com/YuriiSalimov/EepromMemory

	Created by Yurii Salimov, April, 2018.
	Released into the public domain.
*/

#ifndef EEPROM_MEMORY_H
#define EEPROM_MEMORY_H

#if defined(ARDUINO) && (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#include <EEPROM.h>

#define EEPROM_INT_SIZE		2
#define EEPROM_LONG_SIZE	4
#define EEPROM_FLOAT_SIZE	4
#define EEPROM_DOUBLE_SIZE	4

class EepromMemory final {

	public:
		void writeByte(const int address, const byte data);

		byte readByte(const int address);

		void writeBoolean(const int address, const boolean data);

		boolean readBoolean(const int address);

		void writeChar(const int address, const char data);

		char readChar(const int address);

		void writeInt(const int address, const int data);

		int readInt(const int address);

		void writeLong(const int address, const long data);

		long readLong(const int address);
		
		void writeFloat(const int address, const float data);

		float readFloat(const int address);

		void writeDouble(const int address, const double data);

		double readDouble(const int address);

		void clear();

		int length();

	private:
		template <typename T> void writeData(
			const int address,
			const T data,
			const int size
		);

		template <typename T> T readData(
			const int address,
			const T data,
			const int size
		);
};

#endif
