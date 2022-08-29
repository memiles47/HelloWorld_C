#include <iostream>
#include <string>
// #include <cstdlib>;
// #include <ctime>;
//#include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	string names[3];
	cout << "Enter Name 1: ";
	getline(cin, names[0]);

	cout << "Enter Name 1: ";
	getline(cin, names[1]);

	cout << "Enter Name 1: ";
	getline(cin, names[2]);


	cout << "The first name you entered was: " << names[0];
	return 0;
}