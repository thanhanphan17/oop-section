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

void School::addStudentToCourse(Student student, Course& course) {
	bool containStudent = false, containCourse = false;
	for (int i = 0; i < this->students.size();++i) {
		if (strcmp(this->students[i].getId(), student.getId()) == 0) {
			containStudent = true;
			break;
		}
	}

	for (int i = 0; i < this->courses.size(); ++i) {
		if (strcmp(this->courses[i].getCourseName(), course.getCourseName()) == 0) {
			containCourse = true;
			break;
		}
	}

	if (containStudent && containCourse) {
		if (course.getStudentList().size() < course.getCapacity()) {
			course.addStudent(student);
		}
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

std::pair<Student&, bool> School::getStudentById(const char* id) {
	for (int i = 0; i < this->students.size(); ++i) {
		if (strcmp(this->students[i].getId(), id) == 0) {
			return { this->students[i],false };
		}
	}
	Student student;
	return { student, true };
}

std::pair<Teacher&, bool> School::getTeacherById(const char* id) {
	for (int i = 0; i < this->teachers.size(); ++i) {
		if (strcmp(this->teachers[i].getId(), id) == 0) {
			return { this->teachers[i],false };
		}
	}
	Teacher teacher;
	return { teacher, true };
}
