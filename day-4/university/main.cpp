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

	return 0;
}