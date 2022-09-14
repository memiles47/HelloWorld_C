#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

/*
Adding an & after the type creates a reference to the original variable
this should be done with variable containing large amounts of date e.g. strings
*/

void increasePrice(double& price)
{
	price *= 1.2;
}

void greet(const string& name)
{
	cout << "Hello " << name << endl;
	// name = "a";
}

int main()
{
	double price{ 100 };
	increasePrice(price);
	cout << price << endl;

	string name{ "Michael" };
	greet(name);
	cout << name;
	

	return 0;
}