/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Function with Parameters
*/

#include <iostream>
using namespace std;

void multiply(int num1, int num2)      // Function do integer parameters leta hai
{
    int product;      // Product store karne ke liye variable

    product = num1 * num2;      // Dono numbers ka multiplication ho raha hai

    cout << "Product = " << product << endl;      // Result display ho raha hai
}

int main()
{
    multiply(5, 4);      // Function call kiya gaya hai aur values pass ki gayi hain

    return 0;      // Program successful end
}
