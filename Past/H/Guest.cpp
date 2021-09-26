#include "Guest.h"
#include<iostream>
#include<cstring>

using namespace std;

Guest::Guest()
{
	gustID = 0;
	strcpy_s(gustNmae, " ");
	ratePerdAY = 0;
	numberOfDays = 0;

}

Guest::Guest(int id, const char name[], double rate, int days)
{
	gustID = id;
	strcpy_s(gustNmae, name);
	ratePerdAY = rate;
	numberOfDays = days;

}

void Guest::displayGustDetails()
{
	cout << "Gust ID = " << gustID << endl;
	cout << "Gust Name = " << gustNmae << endl;
	cout << "Bill Amount :" << calculateGustBill() << endl <<endl;

}

float Guest::calculateGustBill()
{

	return ratePerdAY * numberOfDays;
}

