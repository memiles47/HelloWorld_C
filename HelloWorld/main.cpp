#include <iostream>
#include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	string name{};
	cout << "Enter your name: ";
	getline(cin, name);

	string street{};
	cout << endl << "Enter your address" << endl
		 << "Street: ";
	getline(cin, street);

	string city{};
	cout << "City: ";
	getline(cin, city);

	string state{};
	cout << "State: ";
	getline(cin, state);

	string zip{};
	cout << "Zip: ";
	cin  >> zip;

	cout << name << endl
		 << street << endl
		 << city << ", " << state << ", " << zip;

	return 0;
}