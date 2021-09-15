#include <iostream>
using namespace std;

class worker {
	public:
		char gender;
		string name, lastName, nationality;
		unsigned short int birthYear;
	
		void showName() {
			cout << "Imiê: " << name << "\n";
		}
		
		void showLastName();
		void showFullName();
		void showAllData();
};

void worker::showLastName() {
	cout << "Nazwisko: " << lastName << "\n";
}

void worker::showFullName() {
	cout << "Imiê i nazwisko: " << name << " " << lastName << "\n";
}

void worker::showAllData() {
	showFullName();
	cout << "Narodowoœæ: " << nationality << "\nRok urodzenia: " << birthYear  << "r., P³eæ: ";
	switch(gender) {
		case 'm':
			cout << "Mê¿czyzna\n";
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
	pracownik.name = "Micha³";
	pracownik.lastName = "Kowalski";
	pracownik.nationality = "Polska";
	pracownik.birthYear = 1996;
	pracownik.gender = 'm';
	
	pracownik.showName();
	pracownik.showLastName();
	pracownik.showFullName();
	pracownik.showAllData();
	
}
