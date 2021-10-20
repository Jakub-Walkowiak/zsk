#include <iostream>
using namespace std;

struct Date {
	int d, m, y;
};

class Car {
	public:
		int id {0};
		string brand {"defualt"}, model {"defualt"};
		
		void getData();
		
		Car(int id = 13, string brand = "Fiat", string model = "ABC");
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
	Car myCar;
	myCar.getData();

}
