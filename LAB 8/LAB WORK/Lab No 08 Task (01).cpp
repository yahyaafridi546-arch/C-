/*
Name: Muhammad YAHYA AFRDI
Registration No: BFNWELE0755
Department: Electrical
Section: Power

Program: Two-Dimensional Array Declaration and Initialization
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {      // 2D array declare aur initialize kiya gaya hai
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Elements of 2D Array:" << endl;   // Array ke elements display karne ka message

    for(int i = 0; i < 3; i++)   // Outer loop rows ko control karta hai
    {
        for(int j = 0; j < 3; j++)   // Inner loop columns ko control karta hai
        {
            cout << matrix[i][j] << " ";   // Array ka har element print ho raha hai
        }

        cout << endl;   // Har row ke baad next line
    }

    return 0;   // Program successful end
}
