#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	double value1{};
	double value2{};

	cout << "Enter two numeric values: ";
	cin >> value1 >> value2;

	double larger = value1 > value2 ? value1 : value2;

	cout << endl << larger;
	return 0;
}