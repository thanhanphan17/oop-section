#include "stdafx.h"
#include "school.h"

int main() {
	School highSchool;

	Teacher A("Qwer", "1234", 3);
	Teacher B("Kevil", "1235", 3);
	highSchool.addTeacher(A);
	highSchool.addTeacher(B);

	Course F("Math", "456", 10);
	Course G("History", "789", 20);
	highSchool.addCourse(F); 
	highSchool.addCourse(G); 

	if (!highSchool.getCourseByName("Math").second) {
		highSchool.addTeacherToCourse(A, highSchool.getCourseByName("Math").first);
		highSchool.addTeacherToCourse(B, highSchool.getCourseByName("Math").first);

	} else {
		cout << "Not found\n";
	}

	vector<Teacher> tList = highSchool.getCourseByName("Math").first.getTeacherList();

	for (auto x : tList) {
		cout << x.getName() << "\n";
	}

	return 0;
}