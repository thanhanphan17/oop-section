#include "animal.h"
#include <string>

char* Animal::getName() const {
	return this->name;
}

bool Animal::setName(const char* name) {
	// this->name = name
	this->name = new char[strlen(name)];

	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	return true;
}