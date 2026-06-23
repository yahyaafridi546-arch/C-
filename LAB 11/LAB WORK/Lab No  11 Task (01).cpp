/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: String Length Calculation
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message = "Welcome to C++Programming";      // String variable declare aur initialize kiya gaya hai

    int length;      // String ki length store karne ke liye variable

    length = message.length();      // Built-in function se string ki length calculate ho rahi hai

    cout << "Message: " << message << endl;      // String display ho rahi hai

    cout << "Length of String = " << length << endl;      // String ki length display ho rahi hai

    return 0;      // Program successful end
}
