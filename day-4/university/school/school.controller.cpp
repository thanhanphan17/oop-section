#include "../school.h"

void School::addTeacher(Teacher teacher) {
	this->teachers.push_back(teacher);
}

void School::printTeacher() {
	for (int i = 0; i < teachers.size(); ++i) {
		cout << teachers[i].getName() << std::endl;
	}
}

void School::addStudent(Student student) {
	this->students.push_back(student);
}

void School::printStudent() {
	for (int i = 0; i < students.size(); ++i) {
		cout << students[i].getName() << std::endl;
	}
}

void School::addCourse(Course course) {
	this->courses.push_back(course);
}

void School::printCourse() {
	for (int i = 0; i < courses.size(); ++i) {
		cout << courses[i].getCourseName() << std::endl;
	}
}

void School::addTeacherToCourse(Teacher teacher, Course& course) {
	bool containTeacher = false, containCourse = false;

	for (int i = 0; i < teachers.size(); ++i) {
		if (strcmp(this->teachers[i].getId(), teacher.getId()) == 0) {
			containTeacher = true;
			break;
		}
	}

	for (int i = 0; i < courses.size(); ++i) {
		if (strcmp(this->courses[i].getCourseName(), course.getCourseName()) == 0) {
			containCourse = true;
			break;
		}
	}

	if (containTeacher && containCourse) {
		course.addTeacher(teacher);
	}
}

std::pair<Course&, bool>  School::getCourseByName(const char* name) {
	for (int i = 0; i < this->courses.size(); ++i) {
		if (strcmp(this->courses[i].getCourseName(), name) == 0) {
			return { this->courses[i], false};
		}
	}
	Course course;
	return { course, true };
}

