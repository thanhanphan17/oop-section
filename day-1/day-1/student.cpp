#include "student.h"

Student::Student() { // default constructor
	name = "An";
	id = "21127003";
	age = 0;
	faculty = new char;
}

Student::Student(int age) {
	name = "0";
	id = "0";

	this->age = age;
}

Student::Student(std::string name, std::string id, int age) {
	this->name = name;
	this->id = id;
	this->age = age;
}

Student::Student(const Student& student) {
	this->name = student.name;
	this->age = student.age;
	this->id = student.id;
	this->faculty = new char;
	*this->faculty = *student.faculty;
}

Student::~Student() {
	delete this->faculty;
	this->faculty = nullptr;
}

std::string Student::getName() const {
	return this->name;
}

void Student::setName(std::string name) {
	this->name = name;
}
