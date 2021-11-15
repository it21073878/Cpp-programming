#include "Item.h"
#include<cstring>
#include<iostream>
using namespace std;

Item::Item(int pItemNo, const char pName[]) {
	itemNo = pItemNo;
	strcpy_s(nameI, pName);
};


void Item::setPrice(double pPrice) {

	price = pPrice;
};

double Item::calcTotal(int qty) {

	return price * qty;
};

Item::~Item() {

	cout << "Item No : " << itemNo << " deleted." << endl;

};


