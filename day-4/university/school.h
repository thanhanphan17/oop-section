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

	void removeTeacher(Teacher);
	void addTeacherToCourse(Teacher, Course&);
	void addStudentToCourse(Student, Course&);

	vector<Teacher> getTeacherList();

	std::pair<Course&, bool> getCourseByName(const char*);
	std::pair<Student&, bool> getStudentById(const char*);
	std::pair<Teacher&, bool> getTeacherById(const char*);
};