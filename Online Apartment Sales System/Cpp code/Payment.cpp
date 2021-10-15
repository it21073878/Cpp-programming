#include "Payment.h"
#include<cstring>

Payment::Payment()
{
	payID = 0;
	strcpy(payType, "");
	payAmount = 0;
}

Payment::Payment(int pID, const char ppayType[], double ppayAmount)
{
	payID = pID;
	strcpy(payType, ppayType);
	payAmount = ppayAmount;
}

void Payment::checkPayment()
{

}

void Payment::confirmPayment()
{

}

void Payment::displayPaymentDetails()
{

}

Payment::~Payment()
{
	//Destructor 
}
