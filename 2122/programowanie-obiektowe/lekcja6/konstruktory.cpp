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
		
		Car() {};
		
		Car(int id);
		
		Car(string brand, string model, string color);
		
		Car(int, unsigned short int, float, string, string, string, Date); 
};

Car::Car(string pBrand, string pModel, string pColor) {
	brand = pBrand;
	model = pModel;
	color = pColor;
}

Car::Car(int pId, unsigned short int pHorsepower, float pPrice, string pBrand, string pModel, string pColor, Date pManufactureDate) {
	id = pId;
	horsepower = pHorsepower;
	price = pPrice;
	brand = pBrand;
	model = pModel;
	color = pColor;
	manufactureDate = pManufactureDate;
}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model 
		 << "\nData produkcji: " << manufactureDate.d << "-" << manufactureDate.m << "-" << manufactureDate.y << "\nMoc:" << horsepower
		 << "\nKolor: " << color << "\nCena: " << price;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car myCar(1, 450, 1000000, "Ferrari", "F430", "Czerwony", {01, 01, 2000});
	myCar.getData();
	
	Car newCar;
	newCar.getData();
	
	Car anotherCar("fiat", "fiataaa", "fiatowy");
	anotherCar.getData();
	
	Car* wsk;
	wsk = &anotherCar;
	wsk -> brand = "nie fiat";
	wsk -> getData();s
}
