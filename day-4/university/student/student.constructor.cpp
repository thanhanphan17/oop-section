#include "../stdafx.h"
#include "../student.h"

Student::Student() {
	this->name = new char;
	this->id = new char;
}

Student::Student(const char* name, const char* id) {
	this->name = new char[strlen(name) + 1];
	for (int i = 0;i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	this->id = new char[strlen(id) + 1];
	for(int i=0; i < strlen(id); ++i) {
		this->id[i] = id[i];
	}
	this->id[strlen(id)] = '\0';
}

Student::~Student() {

}