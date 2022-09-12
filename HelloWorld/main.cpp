#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

void greet(string firstName, string lastName)
{
	cout << "Hello, " << firstName << " " << lastName << endl;
}

string fullName(string firstName, string lastName)
{
	// Concatenating (combining)
	return firstName + " " + lastName;
}

int main()
{
	// Calling - Invoking - executing
	greet("Michael", "Miles");

	string name = fullName("Michael", "Miles");
	cout << name << endl;

	cout << "Done";

	return 0;
}