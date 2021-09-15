#include "Book.h"
#include <iostream>
using namespace std;

int main()
{
    int id;

    Book b1, b2, b3;

    b1.setBookDetails(1212, "Jane Eyre", "Charlote Brooke");
    b2.setBookDetails(1234, "Divergmt" , "Verconica Roth");
    b3.setBookDetails(3456, "Matilda"  , "Roald Dahl" );


    cout << "Input new book ID 1 : ";
    cin >> id;

    b1.setBookID(id);

    cout << "Input new book ID 2 : " ;
    cin >> id;
    b2.setBookID(id);

    cout << "Input new book ID 3 : " ;
    cin >> id;
    b3.setBookID(id);


    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();

    return 0;
}

