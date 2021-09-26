// Class declarration
class Student
{
private:
	int studentID;
	char studentName[20];
	double marksOOC;
	double marksSPM;
	double marksISDM;
public:
	void setStudentDetails(int sID, const char sName[] );

	void setMarksOOC(double mooc );
	void setMarksSPM(double mspm);
	void setMarksISDM(double misdm);

	double getMarksOOC();
	double getMarksSPM();
	double getMarksISDM();

};

