#include "Meal.h"
#include <cstring>

Meal::Meal()
{
	mealNo = 0;
	strcpy_s(description, " ");
	price = 0;
}

void Meal::setDetails(int no, const char pDesc[20])
{
	mealNo = no;
	strcpy_s(description, pDesc);
}

void Meal::setPrice(double pPrice)
{
	price = pPrice;
}

double Meal::getPrice()
{
	return price;
}

int Meal::getmealNo()
{
	return mealNo;
}

double Meal::getmealprice()
{
	return price ;
}

Meal::~Meal()
{

}
