#include "Medicine.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float newDs;
    Medicine m1, m2, m3;

    m1.setMedicineDetails(1, "Pandol", "Headache", 1.0);
    m2.setMedicineDetails(2, "Vitamine" , "Cold", 1.5 );
    m3.setMedicineDetails(3, "Vicks", "Cough", 2.0);

    cout << "Input new dose of medicine 1 :";
    cin >> newDs;
    m1.setDose(newDs);

    cout << "Input new dose of medicine 2 :";
    cin >> newDs;
    m2.setDose(newDs);

    cout << "Input new dose of medicine 3 :";
    cin >> newDs;
    m3.setDose(newDs);

    m1.displayMedicineDetails();
    m2.displayMedicineDetails();
    m3.displayMedicineDetails();

    return 0;
}

