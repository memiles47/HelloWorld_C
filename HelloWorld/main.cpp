#include <iostream>

using namespace std;

int main() {
	double fahrenheit;

	cout << "Please enter a temperature in degrees fahrenheit: ";
	cin >> fahrenheit;

	double celsius = (fahrenheit - 32) / 1.8000;
	cout << "That is equivalent to " << celsius << " degrees celsius.";

	return 0;
}