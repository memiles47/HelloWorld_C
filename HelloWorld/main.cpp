#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	int number{};

	do
	{
		cout << "Enter a number: ";
		cin >> number;
	} while (number < 1 || number > 5);

	return 0;
}