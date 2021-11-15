#include <iostream>
#include <iomanip>
#include <cstring>

#include "Employee01.h"

using namespace std;

void Employee01::assignDetails(int no, const char emName[], double emBasicSal) {
	empno = no;
	strcpy_s(name , emName);
	basicSal = emBasicSal;
};

void Employee01::setAllowance(double alwc) {
	allowance = alwc;

}

void Employee01::calsal()
{
	salary = basicSal + allowance;
}
//exercise 2 
void Employee01::setOtDetails(int hrs, double rate) {
	otHrs = hrs;
	otRate = rate;

}

void Employee01::printSlip() {
	cout << "--------------------------------" << endl;
	cout << "Employee number : " << empno << endl;
	cout << "Employee Name : " << name << endl;
	cout << "Basic Salary : " << basicSal << endl;
	cout << "Allowance : " << allowance << endl;
	cout << "Net Salary : " <<setiosflags(ios::fixed)<<setprecision(2) << salary << endl;
	cout << "--------------------------------" << endl;

	//exercise 2 
	salary = salary + (otHrs * otRate);
	cout << "OT Salary : " << otHrs * otRate << endl;
	cout << "Net Salary : " <<setiosflags(ios::fixed) << setprecision(2) <<salary << endl;


}


