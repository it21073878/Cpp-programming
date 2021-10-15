#include "Buyer.h"

Buyer::Buyer()
{
	noOfApartments = 0;
}

Buyer::Buyer(const char usName[], const char usPwd[], int id, const char name[], const char address[], const char email[], const char telno[], int pnoOfApartments):RegisteredCustomer(usName,usPwd, id,  name, address,  email,  telno)
{
	noOfApartments = pnoOfApartments;
}

void Buyer::addBuyingApartment(Apartment* pbuyApt)
{
	if (noOfApartments < SIZE)
	{
		buyApt[noOfApartments] = pbuyApt;
		noOfApartments++;
	}
}

void Buyer::login()
{

}

void Buyer::displayBuyerDetails()
{

}

Buyer::~Buyer()
{
	//Destructor 
	for (int i = 0; i < SIZE; i++)
	{
		delete buyApt[i];
	}
}
