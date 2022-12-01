#pragma once
#include <string>
#include <iostream>

class Student {
private:
	std::string name, id;
	int age;
	char* faculty;

public:
	Student();
	Student(int);
	Student(std::string, std::string, int);
	Student(const Student&);
	
	std::string getName() const;
	void setName(std::string name);


	~Student();
};
