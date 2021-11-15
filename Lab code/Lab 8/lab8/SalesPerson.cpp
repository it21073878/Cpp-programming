#include "SalesPerson.h"
#include "Item.h"
#include<cstring>
#include<iostream>
using namespace std;


SalesPerson::SalesPerson(int emNo, const char pName[]) {
	empNo = emNo;
	strcpy_s(nameE, pName);

};

void  SalesPerson::calcSales(Item i1, Item i2) {

	int qty1, qty2;

	cout << "Enter quantity of item 1 : ";
	cin >> qty1;
	cout << "Enter quantity of item 2 : ";
	cin >> qty2;
	 
	sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);
};

void SalesPerson::printSales() {

	cout << "Employee Number : " << empNo << endl;
	cout << "Employee Name : " << nameE << endl;
	cout << "Total Sales : " << sales << endl;

};

SalesPerson::~SalesPerson() {

	cout << "Employee No : " << empNo << " deleted." << endl;
};



