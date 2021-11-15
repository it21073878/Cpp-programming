#include <iostream>
#include "SalesPerson.h"
#include "Item.h"
#include<cstring>
using namespace std;

int main()
{
	int itm_num , emp_No;
	char itm_Name[20] , emp_Name[20];
	double prc;


	//************************************
	cout << "Enter Employee Number : ";
	cin >> emp_No;

	cout << "Enter Employee Name : ";
	cin >> emp_Name;


	//SalesPerson s1(emp_No, emp_Name); // static Object

	//exercise 2 - dinamic object
	SalesPerson* s1 = new SalesPerson(emp_No, emp_Name);

	//************************************
	cout << "Enter item Number : ";
	cin >> itm_num;

	cout << "Enter item Name : " ;
	cin  >> itm_Name ;

	cout << "Enter Price : ";
	cin >> prc;

	//Item im1(itm_num, itm_Name); // static Object
	//im1.setPrice(prc);

	//exercise 2 - dinamic object
	Item* im1 = new Item(itm_num, itm_Name);
	im1->setPrice(prc);

	//************************************
	cout << "Enter item Number : ";
	cin >> itm_num;

	cout << "Enter item Name : ";
	cin >> itm_Name;

	cout << "Enter Price : ";
	cin >> prc;

	//Item im2(itm_num, itm_Name); // static Object
	//im2.setPrice(prc);

	//exercise 2 - dinamic object
	Item* im2 = new Item(itm_num, itm_Name);
	im2->setPrice(prc);

	s1->calcSales(*im1, *im2);
	s1->printSales();
	

}

