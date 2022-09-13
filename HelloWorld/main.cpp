#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

void greet(string name)
{
	cout << "Hello " << name << endl;
}

void greet(string title, string name)
{
	cout << "Hello " << title << " " << name << endl;
}

int main()
{
	greet("Mr.", "Miles");
	return 0;
}