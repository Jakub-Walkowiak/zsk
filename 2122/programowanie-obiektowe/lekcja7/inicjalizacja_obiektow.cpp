#include <iostream>
using namespace std;

class Worker {
	public:
		unsigned int id;
		string name;
		string lastName;
		
		void getData();
		
		Worker(unsigned int pId = 0, string pName = "N/A", string pLastName = "N/A");
};

void Worker::getData() {
	cout << "ID: " << id << "\nImiê i Nazwisko: " << name << " " << lastName << endl;
}

Worker::Worker(unsigned int pId, string pName, string pLastName) {
	id = pId;
	name = pName;
	lastName = pLastName;
}

int main () {
	setlocale(LC_CTYPE, "polish");
	
	Worker newWorker();
	newWorker.getData();
	
	Worker coolWorker(1, "Marek", "Nowak");
	coolWorker.getData();
}
