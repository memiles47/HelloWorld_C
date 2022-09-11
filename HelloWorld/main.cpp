#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	int temperatures[]{ 80, 78, 95, 75 };
	double sum{};

	for (int temperature : temperatures)
		sum += temperature;

	short count{ sizeof(temperatures) / sizeof(int) };
	
	double average = sum / count;
	cout << average;


	return 0;
}