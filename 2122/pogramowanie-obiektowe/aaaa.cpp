#include <iostream>
using namespace std;

class Worker {
	public:
		string name = "aaa";
		string lastName;
	
		void showData() {
			cout << "imiê";
		}
};

int main() {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	cout << pracownik.name;
	pracownik.showData();
}
