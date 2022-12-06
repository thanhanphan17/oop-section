#include "../student.h"
#include "../school.h"
#include "../course.h"

void Student::enrollCourse(School& school, Course& course, const char* privateKey) {
	std::hash<std::string> hasher;
	size_t hash = hasher(privateKey);

	//cout << hash << "\n";

	if (hash == course.getHashPrivateKey()) {
		school.addStudentToCourse(*this, course);
	}
}


void leftSchool(School school) {

}
