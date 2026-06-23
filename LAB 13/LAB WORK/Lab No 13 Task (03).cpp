/*
----------------------------------------------------
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical Engineering
Section: Power
PROGRAM TITLE: Accessing Structure Elements
----------------------------------------------------
*/

#include <iostream>
using namespace std;

struct Book
{
    string title;    // book ka title store karne ke liye variable
    string author;   // author ka naam store karne ke liye variable
    float price;     // book ki price store karne ke liye variable
    int pages;       // pages ki tadaad store karne ke liye variable
};

int main()
{
    // Book type ke do variables banaye gaye hain
    Book book1, book2;

    // book1 ke members ko values assign ki gayi hain
    book1.title = "C++ Programming";          // title assign kiya
    book1.author = "Bjarne Stroustrup";      // author assign kiya
    book1.price = 1500.50;                   // price assign ki gayi
    book1.pages = 450;                       // pages assign kiye gaye

    // book2 ke members ko values assign ki gayi hain
    book2.title = "Data Structures";         // title assign kiya
    book2.author = "Mark Allen";             // author assign kiya
    book2.price = 1200.75;                   // price assign ki gayi
    book2.pages = 350;                       // pages assign kiye gaye

    // book1 ki values display ki ja rahi hain
    cout << "Book 1 Information:\n";
    cout << "Title: " << book1.title << endl;      // title print ho raha hai
    cout << "Author: " << book1.author << endl;    // author print ho raha hai
    cout << "Price: " << book1.price << endl;      // price print ho rahi hai
    cout << "Pages: " << book1.pages << endl;      // pages print ho rahe hain

    cout << endl;

    // book2 ki values display ki ja rahi hain
    cout << "Book 2 Information:\n";
    cout << "Title: " << book2.title << endl;      // title print ho raha hai
    cout << "Author: " << book2.author << endl;    // author print ho raha hai
    cout << "Price: " << book2.price << endl;      // price print ho rahi hai
    cout << "Pages: " << book2.pages << endl;      // pages print ho rahe hain

    return 0;   // program end
}
