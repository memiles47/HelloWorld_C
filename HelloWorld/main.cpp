#include <iostream>
// #include <string>
// #include <cstdlib>;
// #include <ctime>;
// #include <iomanip>;
// #include <cmath>

using namespace std;

int main()
{
	double value1{};
	double value2{};
	double answer{};
	char op{};

	cout << "Enter two values and an operator seperated by spaces" << endl;
	cin >> value1 >> value2 >> op;

	switch (op)
	{
	case '*':
		answer = value1 * value2;
		break;

	case '/':
		answer = value1 / value2;
		break;

	case '+':answer = value1 + value2;
		break;

	case '-':
		answer = value1 - value2;
		break;

	default:
		cout << "Invalid operator!";
	}

	cout << value1 << " " << op << " " << value2 << " = " << answer;
	
	return 0;
}