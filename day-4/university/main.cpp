#include "stdafx.h"
#include "school.h"

int main() {
	School highSchool;
	Teacher A("Qwer", "1234", 3);
	Teacher B("TYUI", "5678", 4);
	Teacher C("Ghjk", "1254", 3);

	highSchool.addTeacher(A);
	highSchool.addTeacher(B);
	highSchool.addTeacher(C);
	highSchool.printTeacher();

	Student D("Zxcv", "1234");
	Student E("Bnm", "787");

	highSchool.addStudent(D);
	highSchool.addStudent(E);
	highSchool.printStudent();

	Course F("Math", "456", 10);
	Course G("History", "789", 20);
	
	highSchool.addCourse(F);
	highSchool.addCourse(G);
	highSchool.printCourse();

	return 0;
}