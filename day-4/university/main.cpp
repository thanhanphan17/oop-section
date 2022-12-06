#include "stdafx.h"
#include "school.h"

int main() {
	School highSchool;

	Teacher A("Qwer", "1234", 3);
	Teacher B("Kevil", "1235", 3);
	highSchool.addTeacher(A);
	highSchool.addTeacher(B);

	Course F("Math", "456", 3);
	Course G("History", "789", 20);
	highSchool.addCourse(F); 
	highSchool.addCourse(G); 

	Student Lan("Lan", "56165");
	Student Nhi("Nhi", "413165");
	Student Minh("Minh", "313215");
	highSchool.addStudent(Lan);
	highSchool.addStudent(Nhi);
	highSchool.addStudent(Minh);

	if (!highSchool.getCourseByName("Math").second) {
		highSchool.addTeacherToCourse(highSchool.getTeacherById("1234").first, highSchool.getCourseByName("Math").first);
		highSchool.addTeacherToCourse(highSchool.getTeacherById("1235").first, highSchool.getCourseByName("Math").first);
		highSchool.addStudentToCourse(highSchool.getStudentById("56165").first, highSchool.getCourseByName("Math").first);
		highSchool.addStudentToCourse(highSchool.getStudentById("413165").first, highSchool.getCourseByName("Math").first);
	} else {
		cout << "Not found\n";
	}

	Minh.enrollCourse(highSchool, highSchool.getCourseByName("Math").first, "456");

	highSchool.getCourseByName("Math").first.removeStudentById("313215");

	vector<Student> SList = highSchool.getCourseByName("Math").first.getStudentList();
	//vector<Teacher> TList = highSchool.getCourseByName("Math").first.getTeacherList();

	//for (auto x : TList) {
	//	cout << x.getName() << std::endl;
	//}

	for (auto x : SList) {
		cout << x.getName() << std::endl;
	}

	return 0;
}