#include<cstring>
#include<iostream>
#include "Puppy.h"
#include "GermanShepard.h"
#include "Bulldog.h"
#include "GoldenRetriever.h"
#include "ShihTzu.h"
using namespace std;

int calculation(double wgt, char breed);

float main()
{

	//German Shepard details
	GermanShepard  gs1("GA" , 3 , 10 , "Germany" , "Male"   , "working dogs" , 5 , 25);
	GermanShepard  gs2("GB", 5 , 10 ,  "Germany" , "Female" , "working dogs" , 8 , 38 );

	//Bulldog details
	Bulldog bg1("William George", 1 , 9 , "United Kingdom" , "Male" , "pets" , 2 , 10 );

	// Golden Retriever details
	GoldenRetriever gr1("Toby", 2, 12, "United Kingdom", "Male", "guide dogs", 2, 18);
	GoldenRetriever gr2("Timmy", 3, 12, "United Kingdom", "Male", "guide dogs", 3, 22);
	GoldenRetriever gr3("Shina", 2, 12, "United Kingdom", "Female", "guide dogs", 4, 20);
	GoldenRetriever gr4("Shiba", 3, 12, "United Kingdom", "Female", "guide dogs", 5, 21);

	//Shih Tzu details
	ShihTzu st1("China", 2, 14, "China", "Male", "pets", 5, 19);
	ShihTzu st2("China", 1, 14, "Malaysia", "Female", "pets", 1, 12);



	//German Shepard OUTPUT
	cout << "Bred : German Shepard " << endl;

	cout << "| Cage : " << gs1.getcage();
	cout << " | Gender : " << gs1.getGender();
	cout << " | Pedigree food per week : " << calculation(gs1.getwight(), 'G') << endl;

	cout << "| Cage : " << gs2.getcage();
	cout << " | Gender : " << gs2.getGender();
	cout << " | Pedigree food per week : " << calculation(gs2.getwight(), 'G') << endl << endl;

	//Bulldog OUTPUT
	cout << "Bred : Bulldog " << endl;

	cout << "| Owner : " << bg1.getOwner();
	cout << " | Gender : " << bg1.getGender();
	cout << " | Pedigree food per week : " << calculation(bg1.getWight(), 'B') << endl << endl;

	
	//Golden Retriver OUTPUT
	cout << "Bred : Golden Retriver " << endl;

	cout << "| Puppy name : " << gr1.getName();
	cout << " | Gender : " << gr1.getGender();
	cout << " | Pedigree food per week : " << calculation(gr1.getWight(), 'R') << endl ;

	cout << "| Puppy name : " << gr2.getName();
	cout << " | Gender : " << gr2.getGender();
	cout << " | Pedigree food per week : " << calculation(gr2.getWight(), 'R') << endl;

	cout << "| Puppy name : " << gr3.getName();
	cout << " | Gender : " << gr3.getGender();
	cout << " | Pedigree food per week : " << calculation(gr3.getWight(), 'R') << endl;

	cout << "| Puppy name : " << gr4.getName();
	cout << " | Gender : " << gr4.getGender();
	cout << " | Pedigree food per week : " << calculation(gr4.getWight(), 'R') << endl << endl;

	//Shih Tzu OUTPUT
	cout << "Bred : Shih Tzu " << endl;

	cout << "| Country : " << st1.getCountry();
	cout << " | Gender : " << st1.getGender();
	cout << " | Pedigree food per week : " << calculation(st1.getWight(), 'S') << endl;

	cout << "| Country : " << st2.getCountry();
	cout << " | Gender : " << st2.getGender();
	cout << " | Pedigree food per week : " << calculation(st2.getWight(), 'S') << endl << endl;



	return 0;
}

//Caculation Function
int calculation(double wgt, char breed)
{

	switch (breed)
	{
		case 'G':
		{
			if(wgt < 4)
				return 4*7*100;
			else if (wgt >= 4 and  wgt < 7)
				return 5*7*100;
			else if (wgt >= 7)
				return 6*7*100;
		} break;

		case 'B':
		{
			if(wgt < 3)
				return 5*7*100;
			else if (wgt >= 3 && wgt < 5)
				return 7*7*100;
			else if (wgt >= 5)
				return 8*7*100;
		}break;

		case 'R':
		{
			if(wgt < 3)
				return 3*7*100;
			else if (wgt >= 3 && wgt < 6)
				return 4*7*100;
			else if (wgt >= 6)
				return 5*7 * 100;
		}break;

		case 'S':
		{
			if (wgt < 2) 
				return 2*7 * 100;
			else if (wgt >= 2 && wgt < 4)
				return 3*7 * 100;
			else if (wgt >= 4)
				return 4*7 * 100;
		}break;

		

	}

}
