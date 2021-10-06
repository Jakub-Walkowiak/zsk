#include <iostream>
using namespace std;

class rectangle {
	public:
		float height, width;
		float getArea();
		float getPerimeter();
		void displayData();
};

float rectangle::getArea() {
	return height * width;
}

float rectangle::getPerimeter() {
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
