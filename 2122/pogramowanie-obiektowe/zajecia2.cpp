#include <iostream>
using namespace std;

class worker {
	public:
		char gender;
		string name, lastName, nationality;
		unsigned short int birthYear;
	
		void showName() {
			cout << "Imi�: " << name << "\n";
		}
		
		void showLastName();
		void showFullName();
		void showAllData();
};

void worker::showLastName() {
	cout << "Nazwisko: " << lastName << "\n";
}

void worker::showFullName() {
	cout << "Imi� i nazwisko: " << name << " " << lastName << "\n";
}

void worker::showAllData() {
	showFullName();
	cout << "Narodowo��: " << nationality << "\nRok urodzenia: " << birthYear  << "r., P�e�: ";
	switch(gender) {
		case 'm':
			cout << "M�czyzna\n";
			break;
		case 'f':
			cout << "Kobieta\n";
			break;
		default:
			cout << "-\n";
	}
		
}

int main() {
	setlocale(LC_CTYPE, "polish");
	worker pracownik;
	pracownik.name = "Micha�";
	pracownik.lastName = "Kowalski";
	pracownik.nationality = "Polska";
	pracownik.birthYear = 1996;
	pracownik.gender = 'm';
	
	pracownik.showName();
	pracownik.showLastName();
	pracownik.showFullName();
	pracownik.showAllData();
	
}
