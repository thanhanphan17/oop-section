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

	void enrollCourse(Course, const char*);
	void leftSchool(School);
};