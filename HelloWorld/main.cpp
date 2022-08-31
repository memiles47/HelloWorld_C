#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	double sales{};
	double commission;

	cout << "Enter sales total: ";
	cin >> sales;

	if (sales <= 10'000) commission = .10;
	else if (sales <= 15'000) commission = .15;
	else commission = .20;

	cout << endl << "Your commission will be " << commission * 100 << "%";
	return 0;
}