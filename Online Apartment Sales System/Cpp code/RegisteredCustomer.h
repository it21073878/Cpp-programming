#include"GuestUser.h"
class RegisteredCustomer :public GuestUser
{
protected:
	char custUsername[10];
	char custPassword[10];

public:
	RegisteredCustomer();
	RegisteredCustomer(const char pcustUsername[], const char pcustPassword[], int pcustid, const char pcustName[], const char pcustAddress[], const char pcustEmail[], const char pcustNo[]);
	void displayDetails();
	void login();
	void logout();
	char checkLoginDetails();
	~RegisteredCustomer();
};

