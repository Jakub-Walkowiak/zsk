#include <iostream>
using namespace std;

class Rectangle {
    private: 
        double sideA {0};
        double sideB {0};

    public: 
        void getSideLength();
        void setSideLength(double pSideA, double pSideB);

        Rectangle();
        Rectangle(double pSideA, double pSideB);
};

Rectangle::Rectangle() {}

Rectangle::Rectangle(double pSideA, double pSideB) {
    sideA = pSideA;
    sideB = pSideB;
}

void Rectangle::getSideLength() {
    cout << "Dlugosci bokow to: " << sideA << " i " << sideB << endl;
}

void Rectangle::setSideLength(double pSideA, double pSideB) {
    sideA = pSideA;
    sideB = pSideB;
}

/* void outGetSideLengths(Rectangle obj) {
    cout << "Dlugosci bokow to: " << obj.sideA << " i " << obj.sideB << endl;
} */

int main() {
    Rectangle obj1(11, 2);
    obj1.setSideLength(16, 90);
    obj1.getSideLength();
    // outGetSideLengths(obj1);
}