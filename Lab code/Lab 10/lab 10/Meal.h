#pragma once
class Meal
{
private:
	int mealNo;
	char description[20];
	double price;
public:
	Meal();
	void setDetails(int no, const char pDesc[20]);
	void setPrice(double pPrice);
	double getPrice();
	int getmealNo();
	double getmealprice();
	~Meal();
};

