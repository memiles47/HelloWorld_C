#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

double increasePrice(double price)
{
	price *= 1.2;
	return price;
}

int main()
{
	double price{ 100 };
	price = increasePrice(price);
	cout << price << endl;

	return 0;
}