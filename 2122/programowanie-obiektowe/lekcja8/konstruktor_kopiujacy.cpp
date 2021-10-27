#include <iostream>
using namespace std;

class Rectangle {
	private:
		double sideA, sideB;
	
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		Rectangle(const Rectangle &);
};

int main () {
	setlocale(LC_CTYPE, "polish");

}
