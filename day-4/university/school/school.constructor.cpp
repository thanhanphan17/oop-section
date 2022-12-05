#include "../school.h"

School::School() {
	this->name = new char;
	teachers.clear();
	students.clear();
	courses.clear();
}

School::School(const char* name) {
	this->name = new char[strlen(name) + 1];
	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	teachers.clear();
	students.clear();
	courses.clear();
}

School::~School() {

}