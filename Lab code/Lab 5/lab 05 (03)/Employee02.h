class Employee02 {
private:
	int empno;
	char name[20];
	double basicSal, allowance, salary;
	double otHrs, otRate;
public:
	void inputDetails();
	void inputAllowance();
	void inputOtDetails();
	void calsal();
	void printSlip();

};


