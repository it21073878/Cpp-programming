//#include "Apartment.h"
#include "Staff.h"
#include<cstring>

Staff::Staff()
{
	staffID = 0;
	strcpy(staffName, "");
	strcpy(staffEmail, "");
	strcpy(staffNumber, "0000000000");
	strcpy(staffUsername, "");
	strcpy(staffPassword, "");
}

Staff::Staff(int pstaffID, const char pstaffName[], const char pstaffEmail[], const char pstaffNumber[], const char pstaffUsername[], const char pstaffPassword[])
{
	staffID = pstaffID;
	strcpy(staffName, pstaffName);
	strcpy(staffEmail, pstaffEmail);
	strcpy(staffNumber, pstaffNumber);
	strcpy(staffUsername, pstaffUsername);
	strcpy(staffPassword, pstaffPassword);
}

void Staff::login(const char stfUsername, const char stfPsword)
{
}

void Staff::manage(Apartment* papt)
{
}

Staff::~Staff()
{
	//Destructor 
	for (int i = 0; i < SIZE; i++)
	{
		delete apt[i];
	}
}
