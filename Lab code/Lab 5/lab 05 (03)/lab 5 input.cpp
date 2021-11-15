#include <iostream>

#include "Employee02.h"

using namespace std;

int main()
{
	Employee02 emp1;

	emp1.inputDetails();
	emp1.inputAllowance();
	emp1.inputOtDetails(); 
	emp1.calsal();
	emp1.printSlip();

	char ch;
	cin >> ch;

	return 0;
}
