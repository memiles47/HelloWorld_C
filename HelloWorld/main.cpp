#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		if(i % 3 == 0)
			continue;
		cout << i << endl;
	}
	return 0;
}