#include"Item.h"

class SalesPerson
{
private:
	int empNo;
	char nameE[20];
	double sales;
public:
	SalesPerson(int emNo, const char pName[]);
	void  calcSales(Item i1, Item i2);
	void printSales();
	~SalesPerson();

};

