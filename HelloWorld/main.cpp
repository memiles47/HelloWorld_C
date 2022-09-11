#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
		cout << i << endl;

	int i{ 1 };
	while (i <= 5)
	{
		cout << i << endl;
		i++;
	}
	
	bool validNumber{ true };
	int number{};
	while(validNumber)
	{
		cout << "Enter a number: ";
		cin >> number;

		validNumber = !((number >= 0) && (number <= 5));
	}
	return 0;
}