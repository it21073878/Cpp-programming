
#include"Meal.h"

class Order
{
private:
	int orderID;	
	int count;
	int counttot;
	int countprice;
	int countID;
	int maxSize;

	Meal* meals;

public:
	Order(int pID, int size);
	void additem(int no, const char name[20], double pPrice);
	double calToPrice();
	int getNum();
	double mealPrice();
	~Order();
};

