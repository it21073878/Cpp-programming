#include <iostream>

#include "Employee01.h"

using namespace std;

int main()
{
	Employee01 emp1;

	emp1.assignDetails(10, "wimal", 50000);
	emp1.setAllowance(5000);
	emp1.setOtDetails(3, 20); //exercise 2 
	emp1.calsal();
	emp1.printSlip();

	char ch;
	cin >> ch;

	return 0;
}



 