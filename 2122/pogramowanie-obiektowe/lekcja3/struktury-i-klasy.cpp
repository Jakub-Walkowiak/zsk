#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, y;	
};

class Worker {
	public:
		unsigned int id {};
		string name {}, lastName {};
		Date dateOfBirth {};
		
		void showAllData();
		void setData();	
};

void Worker::showAllData() {
	cout << "Imi� i nazwisko: " << name << " " << lastName << "\nIdentyfikator: " << id << "\nData urodzenia: " << dateOfBirth.d << "-" << dateOfBirth.m << "-" << dateOfBirth.y << "\n";
}

void Worker::setData() {
	cout << "Podaj imi�, nazwisko, identyfikator, i date urodzenia (dzie�, miesi�c, rok):\n";
	cin >> name >> lastName >> id >> dateOfBirth.d >> dateOfBirth.m >> dateOfBirth.y;	
}

int main () {
	setlocale(LC_CTYPE, "polish");
	Worker worker1;
	worker1.setData();
	worker1.showAllData();
}
