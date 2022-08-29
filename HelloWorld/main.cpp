#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	auto x{ 10 };
	double y{ 5 };
	auto result = x == y;
	cout << boolalpha << result << endl;

	auto first{ 'a' };
	auto second{ 'A' };
	auto characterResult = first == second;
	cout << characterResult;
	return 0;
}