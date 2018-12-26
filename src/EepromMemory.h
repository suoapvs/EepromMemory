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

#define EEPROM_INT_SIZE 2
#define EEPROM_LONG_SIZE 4
#define EEPROM_FLOAT_SIZE 4
#define EEPROM_DOUBLE_SIZE 4

class EepromMemory final {

	public:
		void writeByte(int address, byte data);

		byte readByte(int address);

		void writeBoolean(int address, boolean data);

		boolean readBoolean(int address);

		void writeChar(int address, char data);

		char readChar(int address);

		void writeInt(int address, int data);

		int readInt(int address);

		void writeLong(int address, long data);

		long readLong(int address);

		void writeFloat(int address, float data);

		float readFloat(int address);

		void writeDouble(int address, double data);

		double readDouble(int address);

		void clear();

		int length();

	private:
		template <typename T> void writeData(int address, T data, int size);

		template <typename T> T readData(int address, T data, int size);
};

#endif
