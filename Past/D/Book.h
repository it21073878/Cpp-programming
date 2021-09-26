
class Book
{
private:
	int bookId;
	char bookName[20];
	char author[20];
public:
	void setBookDetails(int bID, const char bName[], const char aut[]);
	void displayBookDetails();
	void setBookID(int setID);

};

