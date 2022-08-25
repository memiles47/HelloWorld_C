#include <iostream>
// #include <cmath>

using namespace std;

int main() {
	auto number = 255;
	auto numberBinary = 0b11111111;
	auto numberHexadecimal = 0xFF;

	// Can not used auto with unsigned. This can not accept negative numbers. Stay away
	unsigned int unsignedNumber = 255; 

	cout << number << endl << numberBinary << endl << numberHexadecimal << endl << endl << unsignedNumber;
	return 0;
}