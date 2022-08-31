#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	auto sales{ 11'000 };
	//double commission;

	//if (sales > 10'000) commission = .1;
	//else commission = .05;

	double commission = sales > 10'000 ? .1 : .05;

	cout << commission;

	return 0;
}