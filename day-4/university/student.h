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
	char const* getId();

	void enrollCourse(School&, Course&, const char*);
	void leftSchool(School);
};