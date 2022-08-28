#include <iostream>
// #include <cmath>

using namespace std;

int main() {
	int number{ 1'000'000 };
	short another = number;
	// short another2{ number }; // Will not compile
	cout << another;
	return 0;
}