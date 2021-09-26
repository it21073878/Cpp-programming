class Medicine
{
private:
	int medicineID;
	char medicineName[20];
	char sickness[20];
	float dose;
public:
	void setMedicineDetails(int id , const char name[] , const char sick[] , float dos);
	void displayMedicineDetails();
	void setDose(float ndos);

};

