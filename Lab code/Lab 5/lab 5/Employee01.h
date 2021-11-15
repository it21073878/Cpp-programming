class Employee01 {
private:
	int empno;
	char name[20];
	double basicSal, allowance, salary;
	double otHrs, otRate;
public:
	void assignDetails(int no, const char emName[], double emBasicSal);
	void setAllowance(double alwc);
	void setOtDetails(int hrs, double rate); //exercise 2 
	void calsal();
	void printSlip();

};

