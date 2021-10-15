#include"Selling.h"
#include"Booking.h"
#include"Payment.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5

class Report
{
private:
	Booking* book[SIZE1];
	Selling* sell[SIZE2];
	Payment* pay[SIZE3];
public:
	Report();
	Report(Booking* pbbok[], Selling* psell[], Payment* ppay[]);
	void bookingDetailsReport();
	void sellingDetailsReport();
	void paymentDetailsReport();
	~Report();
};

