#include <iostream>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	cout << sizeof(int) << endl
		 << numeric_limits<int>::max() << endl
		 << numeric_limits<int>::min() << endl;

	cout << sizeof(double) << endl
		 << numeric_limits<double>::max() << endl
		 << numeric_limits<double>::min();

	return 0;
}