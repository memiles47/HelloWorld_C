#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

void greet(string name)
{
	cout << "Hello, " << name  << endl;
}

string fullName(string firstName, string lastName)
{
	// Concatenating (combining)
	return firstName + " " + lastName;
}

int main()
{

	//string name = fullName("Michael", "Miles");
	// cout << name << endl;

	// Calling - Invoking - executing
	greet(fullName("Michael", "Miles"));

	cout << "Done";
	 
	return 0;
}