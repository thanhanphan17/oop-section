#pragma once
#include "course.h"
#include "teacher.h"
#include "student.h"

class School {
private:
	char* name;
	vector<Teacher> teachers;
	vector<Student> students;
	vector<Course> courses;

public:
	School();
	School(const char*);

	~School();

	void addTeacher(Teacher);
	void printTeacher();
};