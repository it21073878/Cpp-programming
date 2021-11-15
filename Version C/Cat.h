class Cat
{
private: 
	//private data 
	int setID;
	char catName[20];
	char owner[20];
	char catBreed[20];

public: 
	// public data 

	void CatDetails(int id, const char name[],  const char breed[]);
	void displayCatDetails();
	void setOwner(const char own[]);


}; 
//end of class

