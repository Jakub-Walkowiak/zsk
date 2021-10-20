#include <iostream>
using namespace std;

struct Date {
	int d, m, y;
};

class Car {
	public:
		int id {0};
		unsigned short int horsepower;
		float price;
		string brand {"defualt"}, model {"defualt"}, color;
		Date manufactureDate;
		
		void getData();
		
		Car() {};
		
		Car(int id, string brand, string model);
};

Car::Car(int pId, string pBrand, string pModel) {
	id = pId;
	brand = pBrand;
	model = pModel;
}

void Car::getData() {
	cout << "\nID: " << id << "\nMarka: " << brand << "\nModel: " << model;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Car myCar(1,"ferrari", "F430");
	myCar.getData();
	
	Car opel(1, "Opel", "Astra");
	opel.getData();
	
	Car testCar;
	testCar.getData();
}
