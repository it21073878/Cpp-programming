class Item
{
private:
	int itemCode;
	double unitePrice;
	double discount;
	int minimumQty;
public:
	Item();
	Item(int code, double uniPrice, double dis, int qty);
	void setDiscount();
	double calPrice(int qty);
	void displayItem(double tot);

};

