#pragma once

class Animal {
private:
	char* name;
	bool canFly, canSwim;
	float speed; // >= 0

public:
	Animal();
	Animal(const char*);
	Animal(const char*, bool, bool, float);
	Animal(const Animal &);
	~Animal();

	char* getName() const; // getter
	bool setName(const char*); // setter
	
};