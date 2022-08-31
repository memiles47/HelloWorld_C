#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	// US Citizen
	//   CA Resident: tuition = 0
	//   Non Resident: tuition = 1000
	// Not a US Citizen
	//	 tuition = 1000

	bool isCitizen{ true };
	auto caResident{ true };
	short tuition{};

	if (isCitizen) // Outer If Statement
	{
		if (!caResident) tuition = 1000; // Inner If Statement
	}
	else tuition = 3000;

	cout << tuition;
	return 0;
}