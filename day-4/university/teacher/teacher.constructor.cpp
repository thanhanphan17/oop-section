#include "../stdafx.h"
#include "../teacher.h"

Teacher::Teacher() {
	this->name = new char;
	this->id = new char;
	this->expYear = 0;
}

Teacher::Teacher(const char* name, const char* id, int expYear) {
	this->name = new char[strlen(name) + 1];
	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	this->id = new char[strlen(id) + 1];
	for (int i = 0; i < strlen(id); ++i) {
		this->id[i] = id[i];
	}
	this->id[strlen(id)] = '\0';

	this->expYear = expYear;
}

Teacher::~Teacher() {

}
