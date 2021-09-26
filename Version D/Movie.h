//IT21061066
//D.M.P.D.Weligama
//Group 3.1
//Malabe

class Movie
{
private:
	int movieID;
	char movieName[20];
	char genre[20];
	int rating;

public:
	void setMovieDetails(int MID, const char Mname[], const char Mgenre []);
	void displayMovieDetails();
	void setRating(int Mrate);
};

