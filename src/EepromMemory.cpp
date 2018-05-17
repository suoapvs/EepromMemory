#include "EepromMemory.h"

// --- EEPROM methods ---
int EepromMemory::length() {
	return EEPROM.length();
}

/**
	EEPROM.write():
	Always write the data to the EEPROM at the address.
	EEPROM.update(): 
	The data is written only if differs from 
	the one already saved at the same address.
*/
void EepromMemory::writeByte(const int address, const byte data) {
	//EEPROM.write(address, data);
	EEPROM.update(address, data);
}

byte EepromMemory::readByte(const int address) {
	return EEPROM.read(address);
}
// --- --- --- --- --- ---

void EepromMemory::writeBoolean(const int address, const boolean data) {
	writeByte(address, data);
}

boolean EepromMemory::readBoolean(const int address) {
	return readByte(address);
}

void EepromMemory::writeChar(const int address, const char data) {
	writeByte(address, data);
}

char EepromMemory::readChar(const int address) {
	return readByte(address);
}

void EepromMemory::writeInt(const int address, const int data) {
	writeData(address, data, EEPROM_INT_SIZE);
}

int EepromMemory::readInt(const int address) {
	return readData(address, int(0), EEPROM_INT_SIZE);
}

void EepromMemory::writeLong(const int address, const long data) {
	writeData(address, data, EEPROM_LONG_SIZE);
}

long EepromMemory::readLong(const int address) {
	return readData(address, long(0), EEPROM_LONG_SIZE);
}

void EepromMemory::writeFloat(const int address, const float data) {
	writeData(address, data, EEPROM_FLOAT_SIZE);
}

float EepromMemory::readFloat(const int address) {
	return readData(address, float(0), EEPROM_FLOAT_SIZE);
}

void EepromMemory::writeDouble(const int address, const double data) {
	writeData(address, data, EEPROM_DOUBLE_SIZE);
}

double EepromMemory::readDouble(const int address) {
	return readData(address, double(0), EEPROM_DOUBLE_SIZE);
}

template <typename T> void EepromMemory::writeData(
	const int address,
	const T data,
	const int size
) {
	byte raw[size];
	(T&) raw = data;
	for(byte i = 0; i < size; i++) {
		writeByte(address + i, raw[i]);
	}
}

template <typename T> T EepromMemory::readData(
	const int address,
	const T data,
	const int size
) {
	byte raw[size];
	for(byte i = 0; i < size; i++) {
		raw[i] = readByte(address + i);
	}
	return (T&) raw;
}

void EepromMemory::clear() {
	const int memoryLength = length();
	for (int i = 0 ; i < memoryLength; i++) {
		writeByte(i, 0);
	}
}
