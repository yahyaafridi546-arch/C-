/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Sum and Average of Array Elements Using Function
*/

#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)      // Function array aur size ko parameters ke tor par leta hai
{
    int sum = 0;      // Sum store karne ke liye variable

    for(int i = 0; i < size; i++)      // Array ke tamam elements par loop chal raha hai
    {
        sum = sum + arr[i];      // Har element sum mein add ho raha hai
    }

    return sum;      // Total sum return ho raha hai
}

int main()
{
    int numbers[10];      // 1D array declare kiya gaya hai
    int total;
    float average;

    cout << "Enter 10 integer values:" << endl;      // User se input lene ka message

    for(int i = 0; i < 10; i++)      // 10 values input lene ke liye loop
    {
        cin >> numbers[i];      // Array mein values store ho rahi hain
    }

    total = calculateSum(numbers, 10);      // Function call kiya gaya hai

    average = total / 10.0;      // Average calculate ho raha hai

    cout << endl;

    cout << "Sum of Array Elements = " << total << endl;      // Total sum display
    cout << "Average of Array Elements = " << average << endl;      // Average display

    return 0;      // Program successful end
}
