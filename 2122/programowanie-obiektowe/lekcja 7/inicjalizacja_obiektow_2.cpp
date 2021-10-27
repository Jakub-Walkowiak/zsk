#include <iostream>
using namespace std;

class Worker {
	public:
		unsigned int id;
		string name;
		string lastName;
		
		void getData();
		
		Worker();
		Worker(unsigned int, string pName, string pLastName);
};

void Worker::getData() {
	cout << "ID: " << id << "\nImiê i Nazwisko: " << name << " " << lastName << endl;
}

Worker::Worker() {
	id = 0;
	name = "N/A";
	lastName = "N/A";
}

Worker::Worker(unsigned int pId, string pName, string pLastName) {
	id = pId;
	name = pName;
	lastName = pLastName;
}

int main () {
	setlocale(LC_CTYPE, "polish");
	
	Worker newWorker = Worker();
	newWorker.getData();
	
	Worker coolWorker(1, "Marek", "Nowak");
	coolWorker.getData();
}
