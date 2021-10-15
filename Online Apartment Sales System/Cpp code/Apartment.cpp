#include "Apartment.h"
#define SIZE1 2
#define SIZE2 2

Apartment::Apartment()
{

}

Apartment::Apartment(int sell1, int sell2, int book1, int book2, Seller* pseller, Buyer* pbuyer, Staff* pstaff)
{
	sell[0] = new Selling(sell1);
	sell[1] = new Selling(sell2);

	book[0] = new Booking(book1);
	book[1] = new Booking(book2);

	seller = pseller;
	buyer = pbuyer;
	staff = pstaff;
}

void Apartment::apartmentDetails(int aptID, const char aptLocation, double aptPrice, const char aptFacility, double aptUtiPrice, const char aptStatus, Seller* pseller, Buyer* pbuyer, Staff* pstaff)
{

}

void Apartment::deleteApartmentDetails()
{

}

void Apartment::updateApartmentDetails()
{

}

void Apartment::calculateApartmentPrice()
{

}

void Apartment::displayAptDetails()
{

}

void Apartment::checkAvailability()
{

}

Apartment::~Apartment()
{
	//Destructor 
	for (int i = 0; i < SIZE1; i++)
	{
		delete book[i];
	}

	for (int i = 0; i < SIZE2; i++)
	{
		delete sell[i];
	}
}
