#pragma once
#include "stdafx.h"
#include "teacher.h"
#include "student.h"

class Course {
private:
	vector<Teacher> teachers;
	vector<Student> students;
	char* name, * privateKey;
	int capacity;

public:
	Course();
	Course(int);
	Course(const char*, const char*, int);

	char const* getCourseName();
	void addTeacher(Teacher);
	
	vector<Teacher> getTeacherList();
};