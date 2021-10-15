#include "Report.h"

Report::Report()
{
	for (int i = 0; i < SIZE1; i++)
	{
		book[i] = 0;
	}
	for (int j = 0; j < SIZE2; j++)
	{
		sell[j] = 0;
	}
	for (int k = 0; k < SIZE3; k++)
	{
		pay[k] = 0;
	}
}

Report::Report(Booking* pbbok[], Selling* psell[], Payment* ppay[])
{
	for (int i = 0; i < SIZE1; i++)
	{
		book[i] = pbbok[i];
	}
	for (int j = 0; j < SIZE2; j++)
	{
		sell[j] = psell[j];
	}
	for (int k = 0; k < SIZE3; k++)
	{
		pay[k] = ppay[k];
	}
}

void Report::bookingDetailsReport()
{
}

void Report::sellingDetailsReport()
{
}

void Report::paymentDetailsReport()
{
}

Report::~Report()
{
	//Destructor 
	for (int i = 0; i < SIZE1; i++)
	{
		delete book[i] ;
	}
	for (int j = 0; j < SIZE2; j++)
	{
		delete sell[j] ;
	}
	for (int k = 0; k < SIZE3; k++)
	{
		delete pay[k] ;
	}
}
