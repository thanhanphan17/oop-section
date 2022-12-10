#include <iostream>

/*
	& and
	| or
	^ xor
	~ not
	>> right shift
	<< left shift
*/

int sub(int a, int b) {
	return a - b;
}

int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 7, b = 2;

	std::cout << sub(a, b);
	std::cout << add(a, b);

	// and
	// 3d =  011 b "bit pattern"
	// 2d =  010 b "bit pattern"
	// ans = 010 b -> 2 d
	
	// or
	// 3d =  011 b "bit pattern"
	// 2d =  010 b "bit pattern"
	// ans = 011 b -> 3 d 

	// xor
	// 3d =  011 b "bit pattern"
	// 2d =  010 b "bit pattern"
	// ans = 001 b -> 1 d 

	// not unary
	// 7d = 0 0111 b "bit pattern"
	// ans = ~3d = 1 1000 b = -8
	//   
	// one's complement
	// first bit is 1, negative
	// first bit is 0, positive

	
	int d = 5; // 101
	// right shift
	// 101 >> 1 -> 010b -> 2d

	// left shift
	// 101 << 2 -> 10100 -> 10d

	// calculate 2^n

	//int n = 2; // expected 2^2 = 4
	// 1 >> 2 = 100 = 8
	//std::cout << (1 << n);

	int number = 10;
	// 1010 in binary -> number of bits 1 in bit pattern
	// -> 2
	int cnt = 0;

	while (number) {
		if (number & 1) {
			cnt++; // cnt++; cnt++;
		}
		number = number >> 1;
	}

	std::cout << cnt;
	return 0;
}