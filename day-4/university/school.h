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

	void addStudent(Student);
	void printStudent();

	void addCourse(Course);
	void printCourse();

	void addTeacherToCourse(Teacher, Course&);

	std::pair<Course&, bool> getCourseByName(const char*);
};