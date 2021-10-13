#include <iostream>
using namespace std;

struct Date {
	int d, m, y;
};

class Car {
	public:
		int id;
		unsigned short int horsepower;
		float price;
		string brand, model, color;
		Date manufactureDate;
		
		void getData();
		
		Car() {
			id = 10;
			horsepower = 490;
			price = 1500000;
			brand = "Ferrari";
			model = "F430";
			color = "Czerwony";
			manufactureDate = {1, 1, 2008};
		}
};

void Car::getData() {
	cout << "ID: " << id << "\nMarka: " << brand << "\nModel: " << model 
		 << "\nData produkcji: " << manufactureDate.d << "-" << manufactureDate.m << "-" << manufactureDate.y << "\nMoc:" << horsepower
		 << "\nKolor: " << color << "\nCena: " << price;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car myCar;
	myCar.getData();
}

