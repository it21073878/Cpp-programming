#pragma once
class Employee
{
private:
	int employeeID;
	char employeeName[20];
	int OTHours;
	int OTRate;
public:
	void setEmployeeDetails(int eID, const char eName[]);
	void displayEmployeeDetails();
	void setOTHours(int hrs);
	void setOTRate(int rate);
	double calculateOTPPayment();
};

