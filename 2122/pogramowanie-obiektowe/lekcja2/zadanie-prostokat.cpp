#include <iostream>
using namespace std;

class rectangle {
	public:
		unsigned short float height, width;
		unsigned short float getArea();
		unsigned short float getPerimeter();
		void displayData();
};

unsigned short float rectangle::getArea() {
	return height * width;
}

unsigned short float rectangle::getPerimeter() {
	return 2 * height + 2 * width;
}

void rectangle::displayData() {
	cout << "Wysokość: " << height << "\nSzerokość: " << width << "\nPole: " << getArea() << "\nObwód: " << getPerimeter();
}

int main() {
	setlocale(LC_CTYPE, "polish");
	rectangle rectangle1;
	cout << "Proszę podać wymiary prostokąta:\n";
	cin >> rectangle1.height >> rectangle1.width;
	rectangle1.displayData();
}
