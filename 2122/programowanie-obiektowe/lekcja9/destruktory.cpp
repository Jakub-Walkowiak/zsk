#include <iostream>
using namespace std;

class Worker {
	public:
		string firstName, lastName;
		
		void getData();
		
		Worker() { cout << "Konstruktor domyslny\n"; }
		Worker(string pFirstName, string pLastName);
		~Worker() { cout << "Destruktor\n"; }
};

void Worker::getData() {
	cout << "Imie i nazwisko: " + firstName + " " + lastName + "\n";
}

Worker::Worker(string pFirstName, string pLastName)
	: firstName {pFirstName}, lastName {pLastName}
	{ cout << "Konstruktor parametryczny\n"; }

int main() {
	Worker pogczampik("Pog", "Czamp");
	pogczampik.getData();
}
