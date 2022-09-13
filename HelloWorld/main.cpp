#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;


double calculateTax(double income, double taxRate = .2)
{
	return income * taxRate;
}

int main()
{
	double taxNoDefault = calculateTax(10'000, .3);
	double tax = calculateTax(10'000);
	cout << tax << endl;
	cout << taxNoDefault << endl;
	return 0;
}