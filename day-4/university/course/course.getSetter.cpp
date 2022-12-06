#include "../course.h"

char const* Course::getCourseName() {
	return this->name;
}

vector<Teacher> Course::getTeacherList() {
	return this->teachers;
}