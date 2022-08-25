#include <iostream>
// #include <cmath>

using namespace std;

int main() {
	auto price = 99.99; // The auto keyword is great for our coding but
	auto interestRate = 3.67f; // make sure to use the suffix f or L
	auto fileSize = 9000L;
	auto letter = 'a';
	auto isValid = false;

	auto price1{ 99.99 }; // Another way of initializing. Not sure if I like it.
	auto interestRate1{ 3.67f };
	auto fileSize1{ 9000L };
	auto letter1{ 'a' };
	auto isValid1{ true };


	cout << price << endl << interestRate << endl << fileSize << endl << letter << endl << isValid;
	cout << price1 << endl << interestRate1 << endl << fileSize1 << endl << letter1 << endl << isValid1;

	return 0;
}