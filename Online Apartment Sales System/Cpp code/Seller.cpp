#include "Seller.h"


Seller::Seller()
{
	noOfApartments = 0;
}

Seller::Seller(const char usName[], const char usPwd[], int id, const char name[], const char address[], const char email[], const char telno[], int pnoOfApartments) :RegisteredCustomer(usName, usPwd, id, name, address, email, telno)
{
	noOfApartments = pnoOfApartments;
}

void Seller::addSellingApartment(Apartment* psellApt)
{
	if (noOfApartments < SIZE)
	{
		sellApt[noOfApartments] = psellApt;
		noOfApartments++;
	}
}

void Seller::login()
{
}

void Seller::displaySellerDetails()
{
}

Seller::~Seller()
{
	//Destructor 
}
