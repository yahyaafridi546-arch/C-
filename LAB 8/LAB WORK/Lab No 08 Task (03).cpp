/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Finding the Maximum Value in a Two-Dimensional Array
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {12, 5, 8, 20},
        {7, 25, 14, 9},
        {30, 18, 11, 6},
        {4, 16, 22, 10}
    };      // 4x4 array declare aur initialize kiya gaya hai

    int maxValue = matrix[0][0];      // Pehla element maximum maan liya gaya hai

    cout << "Matrix Elements:" << endl;      // Matrix display karne ka message

    for(int i = 0; i < 4; i++)      // Outer loop rows ko control karta hai
    {
        for(int j = 0; j < 4; j++)      // Inner loop columns ko control karta hai
        {
            cout << matrix[i][j] << " ";      // Har element print ho raha hai

            if(matrix[i][j] > maxValue)      // Maximum value check ki ja rahi hai
            {
                maxValue = matrix[i][j];      // Nayi maximum value store ho rahi hai
            }
        }

        cout << endl;      // Har row ke baad next line
    }

    cout << endl;

    cout << "Maximum Value in Array = " << maxValue << endl;      // Maximum value display

    return 0;      // Program successful end
}
