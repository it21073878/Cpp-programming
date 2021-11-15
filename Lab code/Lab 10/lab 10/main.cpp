#include "Order.h"

#include<iostream>
using namespace std;

int main()
{
	Order od1(222 , 3);
	od1.additem(102, "Burger", 550.00);
	od1.additem(114, "Sandwich", 390.00);
	od1.additem(215, "Fish & Chips", 450.00);

	cout <<" Item 1 : " << od1.getNum() << " price : " << od1.mealPrice() << endl;
	cout <<" Item 2 : " << od1.getNum() << " price : " << od1.mealPrice() << endl;
	cout <<" Item 3 : " << od1.getNum() << " price : " << od1.mealPrice() << endl;

	cout << "------------------------------------------------" << endl;
	cout <<"\t" << "Total price is : " << od1.calToPrice() << endl;
	cout << "------------------------------------------------" << endl;

	return 0;
}