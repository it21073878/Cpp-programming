#include "Order.h"
#include<cstring>
#include<iostream>

using namespace std;

Order::Order(int pID, int size)
{
	orderID = pID;
	maxSize = size;
	meals = new Meal[size];
	count = 0;
	counttot = 0;
	countprice = 0;
	countID = 0;
}

void Order::additem(int no, const char name[20], double pPrice)
{
	if (count < maxSize)
	{
		meals[count].setDetails(no, name);
		meals[count].setPrice(pPrice);
		count++;
	}
	else
		cout << "Cannot enter anymore items" << endl;
}

double Order::calToPrice()
{
	double price =0;
	for (counttot=0; counttot < maxSize ; counttot++)
	{
		price = price + meals[counttot].getPrice();		
	}
	
	return price;
}

int Order::getNum()
{
	int no = 0;
	if (countID < maxSize)
	{
		no =  meals[countID].getmealNo();
		countID++;
	}

	return no;
}

double Order::mealPrice()
{
	double price = 0 ;
	if (countprice < maxSize)
	{
		price =   meals[countprice].getmealprice();
		countprice++;
	}

	return price;
}

Order::~Order()
{

}
