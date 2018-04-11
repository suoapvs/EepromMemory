#include "EepromMemory.h"

void EepromMemory::writeByte(const int address, const byte data) {
	EEPROM.write(address, data);
}

byte EepromMemory::readByte(const int address) {
	return EEPROM.read(address);
}

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
	write(address, data, 2);
}

int EepromMemory::readInt(const int address) {
	return read(address, int(0), 4);
}

void EepromMemory::writeLong(const int address, const long data) {
	write(address, data, 4);
}

long EepromMemory::readLong(const int address) {
	return read(address, long(0), 4);
}

void EepromMemory::writeFloat(const int address, const float data) {
	write(address, data, 4);
}

float EepromMemory::readFloat(const int address) {
	return read(address, float(0), 4);
}

void EepromMemory::writeDouble(const int address, const double data) {
	write(address, data, 4);
}

double EepromMemory::readDouble(const int address) {
	return read(address, double(0), 4);
}

template <typename T> void EepromMemory::write(
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

template <typename T> T EepromMemory::read(
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
