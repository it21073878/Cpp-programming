#include"Payment.h"
#define SIZE 2

class Selling {
private:
	int SelID;
	char SelDate[20];
	char SelDescription[50];
	double SelPrice;
	int count = 0;

	Payment* payment[SIZE];

public:
	Selling();
	Selling(int pselID, const char pseldate[], const char pseldescription[], double pselprice, int pay1, int pay2);
	void calculateSellPrice(int id, const char pType[], double pAmt);
	void displaySelPrice();
	void addSelling();
	~Selling();
};