#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int largest(int first, int last)
{
	return first > last ? first : last;
}

int main()
{
	cout << "Please Enter two integers separated by a space followed by the <ENTER> key: ";
	int x{};
	int y{};
	cin >> x >> y;

	cout << largest(x, y);

	return 0;
}