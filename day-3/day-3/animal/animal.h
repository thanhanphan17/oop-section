#pragma once

class Animal {
private:
	char* name;
	bool canFly, canSwim;
	float speed;

public:
	Animal();
	Animal(const char*);
	Animal(const char*, bool, bool, float);
	Animal(const Animal &);
	~Animal();
};