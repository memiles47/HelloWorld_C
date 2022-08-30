#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	// Order of logical operators
	// ()
	// !
	// &&
	// ||

	char isUSCitizen{};
	cout << "Are you a US citizen (Y/N)?: ";
	cin >> isUSCitizen;

	char hasBachelorsDegree{};
	cout << "Do you have a Bachelors degree (Y/N)?: ";
	cin >> hasBachelorsDegree;

	int yearsOfExperience{};
	cout << "How many years of experience do you have?: ";
	cin >> yearsOfExperience;

	bool isEligible = isUSCitizen == 'Y' && (hasBachelorsDegree == 'Y' || yearsOfExperience >= 2);
	cout << boolalpha << isEligible;

	return 0;
}