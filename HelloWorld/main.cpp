#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	int age{20};
	int salary = 50'000;
	bool isEligible{ (age > 18 && age < 65) || (salary > 30'000)};
	cout << boolalpha << !isEligible;
	return 0;
}