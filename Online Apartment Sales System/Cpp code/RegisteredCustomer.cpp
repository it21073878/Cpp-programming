#include "RegisteredCustomer.h"
#include <cstring>

RegisteredCustomer::RegisteredCustomer()
{
	strcpy(custUsername, "");
	strcpy(custPassword, "");
}

RegisteredCustomer::RegisteredCustomer(const char pcustUsername[], const char pcustPassword[], int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[], const char pcustNo[]) : GuestUser(pcustid, pcustName, pcustAddress, pcustEmail, pcustNo)
{
	strcpy(custUsername, pcustUsername);
	strcpy(custPassword, pcustPassword);
}

void RegisteredCustomer::displayDetails()
{

}

void RegisteredCustomer::login()
{

}

void RegisteredCustomer::logout()
{

}

char RegisteredCustomer::checkLoginDetails()
{
	return 0;
}

RegisteredCustomer::~RegisteredCustomer()
{
	//Destructor 
}
