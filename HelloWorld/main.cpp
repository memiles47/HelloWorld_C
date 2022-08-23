#include <iostream>

using namespace std;

int main() {
	double sales = 95000;
	const double stateTaxRate = .04;
	const double countyTaxRate = .02;
	double stateTax = sales * stateTaxRate;
	double countyTax = sales * countyTaxRate;

	cout << "Sales: = $" << sales << endl
		 << "State Tax = $" << stateTax << endl
		 << "County Tax = $" << countyTax << endl
		 << "Total Tax = $" << stateTax + countyTax;

	return 0;
}