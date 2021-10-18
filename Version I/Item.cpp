#include "Item.h"
#include<iostream>
using namespace std;

Item::Item()
{
	itemCode = 0;
	unitePrice = 0;
	discount = 0;
	minimumQty = 0;
}

Item::Item(int code, double uniPrice, double dis, int qty)
{
	itemCode = code;
	unitePrice = uniPrice;
	discount = dis;
	minimumQty = qty;
}

void Item::setDiscount()
{
	if (itemCode == 1)
	{
		discount = 5;
	}
	else if (itemCode == 2)
	{
		discount = 10;
	}
	else if (itemCode == 3)
	{
		discount = 7;
	}
}

double Item::calPrice(int qty)
{
	if (qty < minimumQty)
	{
		return (unitePrice * qty) - ((unitePrice * qty) * discount / 100.0);
	}
	else
		return 0;
}

void Item::displayItem(double tot)
{
	if (tot > 0)
	{
		cout << "Item " << itemCode << " : Total Price Rs : " << tot << endl;
	}
	else
	{
		cout << "Not enough items" << endl;
		cout << "Item " << itemCode << " : Total Price Rs : " << tot << endl << endl;
	}

}
