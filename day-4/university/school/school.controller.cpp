#include "../school.h"

void School::addTeacher(Teacher teacher) {
	this->teachers.push_back(teacher);
}

void School::printTeacher() {
	for (int i = 0; i < teachers.size(); ++i) {
		/*cout << teachers[i].getName() << std::endl;*/
		cout << "abcd";
	}
}