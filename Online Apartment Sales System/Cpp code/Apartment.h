#include "Booking.h"
#include "Selling.h"
#include "Seller.h"
#include "Buyer.h"
#include "Staff.h"

#define SIZE1 2
#define SIZE2 2


class Apartment
{
private:
	int apartmentID;
	char apartmentLoctaion[50];
	double apartmentPrice;
	char apartmentFacilities[50];
	double apartmentUtilityPrice;
	char apartmentStatus[50];
	int count = 0;

	Booking* book[SIZE1];
	Selling* sell[SIZE2];
	Seller* seller;
	Buyer* buyer;
	Staff* staff;

public:
	Apartment();
	Apartment(int sell1, int sell2, int book1, int book2,Seller* pseller, Buyer* pbuyer,Staff* pstaff);
	void apartmentDetails(int aptID, const char aptLocation, double aptPrice, const char aptFacility, double aptUtiPrice, const char aptStatus , Seller* pseller , Buyer* pbuyer , Staff* pstaff);
	void deleteApartmentDetails();
	void updateApartmentDetails();
	void calculateApartmentPrice();
	void displayAptDetails();
	void checkAvailability();
	~Apartment();

};

