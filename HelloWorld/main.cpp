#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	cout << "1- Create account" << endl
		 << "2- Change password" << endl
		 << "3- Quit" << endl
		 << "Select an option: ";

	short input;
	cin >> input;

	switch (input)
	{
	case 1:
		cout << "You selected 1";
		break;

	case 2:
		cout << "You selectedd 2";
		break;

	default:
		cout << "Goodbye!";
	}


	if (input == 1)
		cout << "You selected 1";
	else if (input == 2)
		cout << "You selected 2";
	else
		cout << "Goodbye!";


	return 0;
}