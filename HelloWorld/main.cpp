#include <iostream>
#include <cstdlib>;
#include <ctime>;
// #include <cmath>

using namespace std;

int main() {
	const auto minValue{ 1 };
	const auto maxValue{ 6 };

	srand(time(nullptr));
	auto number{( rand() % (maxValue - minValue + 1)) + minValue };
	cout << number;
	return 0;
}