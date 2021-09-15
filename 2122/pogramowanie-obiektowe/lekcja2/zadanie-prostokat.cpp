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
	cout << "Wysoko��: " << height << "\nSzeroko��: " << width << "\nPole: " << getArea() << "\nObw�d: " << getPerimeter();
}

int main() {
	setlocale(LC_CTYPE, "polish");
	rectangle rectangle1;
	cout << "Prosz� poda� wymiary prostok�ta:\n";
	cin >> rectangle1.height >> rectangle1.width;
	rectangle1.displayData();
}
