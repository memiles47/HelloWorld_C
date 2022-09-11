#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	int numbers[] = { 1, 2, 3, 4 };
	string name{ "Michael Miles" };

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
		cout << numbers[i] << endl;

	for (int number: numbers)
		cout << number << endl;

	for (char ch : name)
		cout << ch;

	return 0;
}