#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, y;
};

struct Student {
	string name, lastName;
	unsigned int id;
	unsigned short int gradeIT[5];
	Date dateOfBirth;
};

int main() {
	setlocale(LC_CTYPE, "polish");
	Student kowalski{"Janusz", "Kowalski", 10, {5, 6, 1, 1, 4}, {29, 9, 2021}};
	cout << "Imię i nazwisko: " << kowalski.name << " " << kowalski.lastName 
	     << "\nIdentyfikator: " << kowalski.id
		 << "\nData urodzenia: " << kowalski.dateOfBirth.d << "-" << kowalski.dateOfBirth.m << "-" << kowalski.dateOfBirth.y
		 << "\nOceny: ";
	
	for (unsigned int i = 0; i < 5; i++) {
		if (i == 4) {
			cout << kowalski.gradeIT[i];
		}
		else {
			cout << kowalski.gradeIT[i] << ", ";
		}
		
	}
}
