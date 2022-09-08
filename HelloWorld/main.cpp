#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	cout << "Please enter a number to factor, 0 or above: ";

	long number{1};
	cin >> number;

	long factorial{1};
	for(long i = 2; i <= number; i++)
	{
		if (number == 0 || number == 1)
			break;

		factorial *= i;
	}

	cout << "The factorial of is " << factorial;

	return 0;
}