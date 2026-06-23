/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Function with Return Value
*/

#include <iostream>
using namespace std;

int getSquare(int number)      // Function integer parameter leta hai
{
    int square;      // Square store karne ke liye variable

    square = number * number;      // Number ka square calculate ho raha hai

    return square;      // Square value return ho rahi hai
}

int main()
{
    int result;      // Result store karne ke liye variable

    result = getSquare(6);      // Function call kiya gaya hai aur value pass ki gayi hai

    cout << "Square = " << result << endl;      // Square display ho raha hai

    return 0;      // Program successful end
}
