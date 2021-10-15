#include "GuestUser.h"
#include <cstring>

GuestUser::GuestUser()
{
	custID = 0;
	strcpy(custName, "");
	strcpy(custAddress, "");
	strcpy(custEmail, "");
	strcpy(custphoneNumber, "0000000000");
}

GuestUser::GuestUser(int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[], const char custPHno[])
{
	custID = pcustid;
	strcpy(custName, pcustName);
	strcpy(custAddress, pcustAddress);
	strcpy(custEmail, pcustEmail);
	strcpy(custphoneNumber, custPHno);
	
}

void GuestUser::searchApartments(Apartment* pApt)
{

}

void GuestUser::registerUser()
{

}

void GuestUser::displayDetails()
{

}

GuestUser::~GuestUser()
{
	//Destructor 
}
