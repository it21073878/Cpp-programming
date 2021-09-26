
#include "Movie.h"
#include <iostream>

using namespace std;

int main()

{
	//Declaration of class objects
	int R;
	Movie M1, M2, M3;

	//invoke the set details functoons
	M1.setMovieDetails(1, "SpiderMan", "Action");

	M2.setMovieDetails(2, "Cinderella", "Childran");
	
	M3.setMovieDetails(3, "Martin", "Action");
	
	//getting keyboard inputs
	cout << "Input new rating of movie 1 :";
	cin >> R;
	M1.setRating(R);
	cout << "Input new rating of movie 2 :";
	cin >> R;
	M2.setRating(R);
	cout << "Input new rating of movie 3 :";
	cin >> R;
	M3.setRating(R);

	//calling details functions
	M1.displayMovieDetails();
	M2.displayMovieDetails();
	M2.displayMovieDetails();

	return 0;
}

