#include "Apartment.h"
class GuestUser
{
protected:
	int custID;
	char custName[20];
	char custAddress[30];
	char custEmail[30];
	char custphoneNumber[10];

public:
	GuestUser();
	GuestUser(int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[] ,const char custPHno[]);
	void searchApartments(Apartment* pApt);
	void registerUser();
	virtual void displayDetails();
	~GuestUser();
};
