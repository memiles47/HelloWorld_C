#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	int secret{ 7 };
	int guess{};

	while(guess != secret)
	{
		cout << "Guess the secret number: ";
		cin >> guess;
	}
	return 0;
}