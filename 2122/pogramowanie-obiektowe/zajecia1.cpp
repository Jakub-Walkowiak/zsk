#include <iostream>
using namespace std;

class Worker {
	public:
		string name;
		string lastName;
		unsigned short int age;
	
		void showName() {
			cout << name << "\n" ;
		}
};

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik;
	pracownik.age = 15;
	pracownik.name = "Jakub";
	pracownik.lastName = "Kowalski";
	
	cout << "Imię i Nazwisko: " << pracownik.name << " " << pracownik.lastName << "\n" ;
	cout << "Wiek: " << pracownik.age << "\n" ;
	
	pracownik.showName();
}
