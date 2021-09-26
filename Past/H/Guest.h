
class Guest
{
private:
	int gustID;
	char gustNmae[20];
	double ratePerdAY;
	int numberOfDays;
public:
	Guest();
	Guest(int id, const char name[], double rate, int days);
	void displayGustDetails();
	float calculateGustBill();

};

