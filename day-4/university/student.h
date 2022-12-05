#pragma once

class Course;
class School;

class Student {
private:
	char* name;
	char* id;

public:
	Student();
	Student(const char*, const char*);
	~Student();

	char const* getName();

	void enrollCourse(Course, const char*);
	void leftSchool(School);
};