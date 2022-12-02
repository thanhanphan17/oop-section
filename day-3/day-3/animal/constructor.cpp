#include "animal.h"
#include <string>
#include <iostream>

Animal::Animal() {
	std::cerr << "call default";
	this->name = new char;
	this->canFly = this->canSwim = false;
	this->speed = 0;
}

Animal::Animal(const char* name) {
	this->name = new char[strlen(name) + 1];

	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	this->canFly = this->canSwim = false;
	this->speed = 0;
}

Animal::Animal(const char* name, bool canFly, 
	bool canSwim, float speed) {

	this->name = new char[strlen(name) + 1];

	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	this->canFly = canFly;
	this->canSwim = canSwim;
	this->speed = speed;
}

Animal::Animal(const Animal& animal) {
	this->name = new char[strlen(animal.name) + 1];

	for (int i = 0; i < strlen(animal.name); ++i) {
		this->name[i] = animal.name[i];
	}
	this->name[strlen(animal.name)] = '\0';

	this->canFly = animal.canFly;
	this->canSwim = animal.canSwim;
	this->speed = animal.speed;
}

Animal::~Animal() {
	delete[] this->name;
}
