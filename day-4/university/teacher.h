#pragma once

class School;

class Teacher {
private:
	char* name;
	char* id;
	int expYear;

public:
	Teacher();
	Teacher(const char*, const char*, int);
	~Teacher();

	void resign(School);

	const char* getName() const;
};