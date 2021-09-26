#include "Salesman.h"
#include<cstring>
#include<iostream>

void Salesman::setSalesmanDetails(int sID, const char sName[], double sal, int num) {

	salesmanID = sID;
	strcpy_s(salesmanNmae, sName);
	salary = sal;
	contactNo = num;

};

void Salesman::displaySalesmanDetails() {


};

void Salesman::setSalesmanContactNo() {



};