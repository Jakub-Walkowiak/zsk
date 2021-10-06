#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "polish");
	int x, y;
	x = 10;
	y = x;
	int* p_test;
	
	p_test = &x;
	cout << p_test; // 0x6ffe0c
	
	p_test = &y;
	cout << endl << p_test; // 0x6ffe10
} 
