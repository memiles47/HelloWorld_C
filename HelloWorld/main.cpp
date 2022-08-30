#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	// ()
	// !
	// &&
	// ||

	bool a{ true };
	bool b{ false };
	bool c{ false };
	bool result = a || b && c;
	cout << boolalpha << result << endl << c;
	return 0;
}