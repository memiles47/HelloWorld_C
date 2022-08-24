#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double radius;
	const double pi = 3.14159;

	cout << "Please enter the radius of a circle: ";
	cin >> radius;

	double area = pi * pow(radius, 2);
	cout << "The area is: " << area;
	return 0;
}