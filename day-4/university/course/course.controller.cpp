#include "../course.h"

void Course::resizeCapacity(int capacity) {
	this->capacity = capacity;
}

size_t Course::getHashPrivateKey() {
	std::hash<std::string> hasher;

	size_t hash = hasher(this->privateKey);

	return hash;
}

void Course::removeStudentById(const char* id) {
	int pos = -1;
	for (int i = 0; i < this->students.size(); ++i) {
		if (strcmp(this->students[i].getId(), id) == 0) {
			pos = i;
			break;
		}
	}

	if (pos != -1) {
		// erease (begin() + position)
		this->students.erase(this->students.begin() + pos);
		
		return;
	}

	std::cerr << "Student is not in the course\n";
}
