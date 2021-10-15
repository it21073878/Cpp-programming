#include "Selling.h"
#include<cstring>



Selling::Selling()
{
	SelID = 0;
	strcpy(SelDate, "");
	strcpy(SelDescription, "");
	SelPrice = 0;
}

Selling::Selling(int pselID, const char pseldate[], const char pseldescription[], double pselprice, int pay1, int pay2)
{
	SelPrice = pselprice;
	strcpy(SelDate, pseldate);
	strcpy(SelDescription, pseldescription);
	SelID = pselID;
}

void Selling::calculateSellPrice(int id, const char pType[], double pAmt)
{
	if (count < SIZE)
	{
		payment[count] = new Payment(id, pType, pAmt);
		count++;
	}
	
}

void Selling::displaySelPrice()
{
}

void Selling::addSelling()
{
}

Selling::~Selling()
{
	//Destructor 
	for (int i = 0; i < SIZE; i++)
	{
		delete payment[i];
	}
}
