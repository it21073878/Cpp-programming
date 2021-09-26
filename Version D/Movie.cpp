//IT21061066
//D.M.P.D.Weligama
//Group 3.1
//Malabe

#include "Movie.h"
#include <cstring>
#include <iostream>

using namespace std;

void Movie::setMovieDetails(int MID, const char Mname[], const char Mgenre[]) {
	movieID = MID;
	strcpy(movieName, Mname);
	strcpy(genre, Mgenre);

}

void Movie::displayMovieDetails() {
	cout << "MovieID = " << movieID << endl;
	cout << "Movie Name = " << movieName << endl;
	cout << "Genre = " << genre << endl;
	cout << "Rating = " << rating << endl;

	cout << "-----------------------" << endl;
}

void Movie::setRating(int Mrate){
	rating = Mrate;

}
