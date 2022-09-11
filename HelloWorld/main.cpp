#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	cout << "Please enter number of rows: ";
	int number{};
	cin >> number;
	char ch = '*';

	for (int i = 1; i <= number; i++)
	{
		for (int a = 1; a <= i; a++)
			cout << ch;
		cout << endl;
	}


	return 0;
}