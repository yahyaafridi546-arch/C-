/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Sum of Rows and Columns in a Two-Dimensional Array
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };      // 3x3 array declare aur initialize kiya gaya hai

    int totalSum = 0;      // Total sum store karne ke liye variable

    cout << "Matrix Elements:" << endl;      // Matrix display karne ka message

    for(int i = 0; i < 3; i++)      // Outer loop rows ko control karta hai
    {
        for(int j = 0; j < 3; j++)      // Inner loop columns ko control karta hai
        {
            cout << matrix[i][j] << " ";      // Har element print ho raha hai
        }

        cout << endl;      // Har row ke baad next line
    }

    cout << endl;

    for(int i = 0; i < 3; i++)      // Rows ka sum calculate karne ke liye loop
    {
        int rowSum = 0;      // Row sum variable

        for(int j = 0; j < 3; j++)      // Row ke elements add karne ke liye
        {
            rowSum = rowSum + matrix[i][j];      // Row sum calculate ho raha hai
        }

        cout << "Sum of Row " << i + 1 << " = " << rowSum << endl;      // Row sum display
    }

    cout << endl;

    for(int j = 0; j < 3; j++)      // Columns ka sum calculate karne ke liye loop
    {
        int columnSum = 0;      // Column sum variable

        for(int i = 0; i < 3; i++)      // Column ke elements add karne ke liye
        {
            columnSum = columnSum + matrix[i][j];      // Column sum calculate ho raha hai
        }

        cout << "Sum of Column " << j + 1 << " = " << columnSum << endl;      // Column sum display
    }

    cout << endl;

    for(int i = 0; i < 3; i++)      // Total sum calculate karne ke liye loops
    {
        for(int j = 0; j < 3; j++)
        {
            totalSum = totalSum + matrix[i][j];      // Total sum calculate ho raha hai
        }
    }

    cout << "Total Sum of All Elements = " << totalSum << endl;      // Total sum display

    return 0;      // Program successful end
}
