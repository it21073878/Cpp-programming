#include"Payment.h"
#define SIZE 2

class Booking {
private:
	char BookID[10];
	char BookDate[20];
	char BookDescription[50];
	double BookPrice;
	int count = 0;

	Payment* payment[SIZE];

public:
	Booking();
	Booking(const char pbookID[], const char pbookDate[],const char pbookDescription[],double pbookPrice,int pay1, int pay2);
	void calculateBookPrice(int id, char pType[], double pAmt);
	void displayBookPrice();
	void addBooking();
	~Booking();

};