#include <iostream>
using namespace std;

class Worker {
	public:
		string firstName, lastName;
		
		void getData();
};

void Worker::getData() {
	cout << "Imi� i nazwisko: " + firstName + " " + lastName;
}

int main() {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	Worker* p_kowalski =& kowalski;
	
	cout << "Adres obiektu kowalski: " << p_kowalski << "\n";
	
	kowalski.lastName = "Kowalski";
	p_kowalski -> firstName = "Pawe�";
	
	kowalski.getData();
	cout << "\n";
	p_kowalski -> getData();
} 
