
#include <iostream>
#include<cstring>
#include<iomanip>

#include "Employee02.h"

using namespace std;

void Employee02::inputDetails() {
	cout << "Input employee number : ";
	cin >> empno;
	cout << "Input employee Name : ";
	cin >> name;
	cout << "Input employee basic Salary : ";
	cin >> basicSal;

};

void Employee02::inputAllowance() {

	cout << "Input employee set Allowance : ";
	cin >> allowance;
}

void Employee02::calsal()
{
	salary = basicSal + allowance;
}

void Employee02::inputOtDetails() {

	cout << "Input OT Hours : ";
	cin >> otHrs;
	cout << "Input OT Rate : ";
	cin >> otRate;

}

void Employee02::printSlip() {
	cout << "--------------------------------" << endl;
	cout << "Employee number : " << empno << endl;
	cout << "Employee Name : " << name << endl;
	cout << "Basic Salary : " << basicSal << endl;
	cout << "Allowance : " << allowance << endl;
	cout << "OT Salary : " << otHrs * otRate << endl;

	salary = salary + (otHrs * otRate);

	cout << "Net Salary : " << setiosflags(ios::fixed) << setprecision(2) << salary << endl;
	cout << "--------------------------------" << endl;

}


