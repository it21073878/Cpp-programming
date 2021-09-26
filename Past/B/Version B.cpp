#include "Employee.h"
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	Employee e1, e2;

	e1.setEmployeeDetails(1111, "Nimal");
	e1.setOTRate(100);
	e1.setOTHours(22);

	e2.setEmployeeDetails(2222, "Sunil");
	e2.setOTRate(200);
	e2.setOTHours(18);

	
	e1.displayEmployeeDetails();
	e2.displayEmployeeDetails();
	

   return 0;
}

