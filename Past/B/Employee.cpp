#include "Employee.h"
#include<cstring>
#include<iostream>
using namespace std;

void Employee::setEmployeeDetails(int eID, const char eName[]) {

	employeeID = eID;
	strcpy_s(employeeName, eName);

};

void Employee::displayEmployeeDetails() {

	cout << "Employee ID : " << employeeID << endl;
	cout << "Employee Name : " << employeeName << endl;
	cout << "OT Payment : " << calculateOTPPayment() << endl <<endl;

};

void Employee::setOTHours(int hrs) {

	OTHours = hrs;

};
void Employee::setOTRate(int rate) {

	OTRate = rate;

};

double Employee::calculateOTPPayment() {

	return OTHours * OTRate;
};