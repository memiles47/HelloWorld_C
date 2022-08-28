#include <iostream>
// #include <cstdlib>;
// #include <ctime>;
#include <iomanip>;
// #include <cmath>

using namespace std;

int main() {
	cout << left;
	cout << setw(15) << "Course" << setw(10) << "Students" << endl;

	cout << setw(15) << "C++"        << right << setw(10) << "100" << endl;
	cout << left
		 << setw(15) << "JavaScript" << right << setw(10) << "50";


	return 0;
}