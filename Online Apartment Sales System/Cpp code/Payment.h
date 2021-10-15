class Payment
{
private:
	int payID;
	char payType[20];
	double payAmount;

public:
	Payment();
	Payment(int pID,const char ppayType[],double ppayAmount);
	void checkPayment();
	void confirmPayment();
	void displayPaymentDetails();
	~Payment();
};
