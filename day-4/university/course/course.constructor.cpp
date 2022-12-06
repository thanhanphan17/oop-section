#include "../course.h"

Course::Course() {
	this->teachers.clear();
	this->students.clear();
	this->name = new char;
	this->privateKey = new char;
	this->capacity = 0;
}

Course::Course(int capacity) {
	this->teachers.clear();
	this->students.clear();
	this->name = new char;
	this->privateKey = new char;
	this->capacity = capacity;
}

Course::Course(const char* name, 
	const char* privateKey, int capacity) {
	this->teachers.clear();
	this->students.clear();

	this->name = new char[strlen(name) + 1];
	this->privateKey = new char[strlen(privateKey) + 1];

	for (int i = 0; i < strlen(name); ++i) {
		this->name[i] = name[i];
	}
	this->name[strlen(name)] = '\0';

	for (int i = 0; i < strlen(privateKey); ++i) {
		this->privateKey[i] = privateKey[i];
	}
	this->privateKey[strlen(privateKey)] = '\0';

	this->capacity = capacity;
}

void Course::addTeacher(Teacher teacher) {
	this->teachers.push_back(teacher);
}

void Course::addStudent(Student student) {
	this->students.push_back(student);
}