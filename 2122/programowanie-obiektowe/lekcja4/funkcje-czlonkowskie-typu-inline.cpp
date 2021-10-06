#include <iostream>
using namespace std;

class Room {
	public: 
		float length, width, height;
		
		inline float roomVolume() {
			return length * width * height;
		} 
};

int main() {
	setlocale(LC_CTYPE, "polish");
	Room kitchen;
	kitchen.length = 6;
	kitchen.width = 3.5;
	kitchen.height = 2.5;
	
	cout << "Kuchnia\nD³ugoœæ: " << kitchen.length << " m\nSzerokoœæ: " << kitchen.width << " m\nWysokoœæ: " << kitchen.height << " m\nObjêtoœæ: "<< kitchen.roomVolume() << " m3";
} 
