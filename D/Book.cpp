#include "Book.h"
#include<cstring>
#include<iostream>

using namespace std;

void Book::setBookDetails(int bID, const char bName[], const char aut[]) {
	
	bookId = bID;
	strcpy_s(bookName, bName);
	strcpy_s(author, aut);

};

void Book::displayBookDetails() {

	cout << "Book ID : " << bookId << endl;
	cout << "Book Name : " << bookName << endl;
	cout << "Author : " << author << endl <<endl <<endl;

};

void Book::setBookID(int setID) {

	bookId = setID;

};