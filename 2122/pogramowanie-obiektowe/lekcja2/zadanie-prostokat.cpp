#include <iostream>
using namespace std;

class rectangle {
	public:
		unsigned short int height, width;
		unsigned short int getArea();
		unsigned short int getPerimeter();
		void displayData();
};

unsigned short int rectangle::getArea() {
	return height * width;
}

unsigned short int rectangle::getPerimeter() {
	return 2 * height + 2 * width;
}

void rectangle::displayData() {
	cout << "Wysokoœæ: " << height << "\nSzerokoœæ: " << width << "\nPole: " << getArea() << "\nObwód: " << getPerimeter();
}

int main() {
	setlocale(LC_CTYPE, "polish");
	rectangle rectangle1;
	cout << "Proszê podaæ wymiary prostok¹ta:\n";
	cin >> rectangle1.height >> rectangle1.width;
	rectangle1.displayData();
}
