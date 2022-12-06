#include "../course.h"

char const* Course::getCourseName() {
	return this->name;
}

vector<Teacher> Course::getTeacherList() {
	return this->teachers;
}

vector<Student> Course::getStudentList() {
	return this->students;
}

int Course::getCapacity() {
	return this->capacity;
}
