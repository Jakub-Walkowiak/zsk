#include <iostream>
using namespace std;

class BankCustomer {
    private:
        string PESEL;
        string cardNumber;

    public: 
        string firstName;
        string lastName;

        void getName();
        void getAllData();

        BankCustomer(string PESEL, string cardNumber, string firstName, string lastName);
};

BankCustomer::BankCustomer(string pPESEL, string pCardNumber, string pFirstName, string pLastName) {
    PESEL = pPESEL;
    cardNumber = pCardNumber;
    firstName = pFirstName;
    lastName = pLastName;
}

void BankCustomer::getName() {
    cout << "Imie i nazwisko: " << firstName << " " << lastName << endl;
}

void BankCustomer::getAllData() {
    cout << "Imie i nazwisko: " << firstName << " " << lastName << "\nPESEL: " << PESEL << "\nNumber karty: " << cardNumber << endl;
}

int main() {
    BankCustomer myCustomer("00000000000", "0000000000000000", "John", "Doe");
    myCustomer.getName();
    myCustomer.getAllData();
}