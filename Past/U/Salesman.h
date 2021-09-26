class Salesman
{
private:
	int salesmanID;
	char salesmanNmae[20];
	double salary;
	int contactNo;
public:
	void setSalesmanDetails(int sID, const char sName[], double sal, int num);
	void displaySalesmanDetails();
	void setSalesmanContactNo();

};

