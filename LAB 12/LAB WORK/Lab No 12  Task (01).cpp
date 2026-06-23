/*
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical
Section: Power

Program: Pointer Declaration and Initialization
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 25;      // Integer variable initialize kiya gaya hai

    int *ptr;          // Pointer variable declare kiya gaya hai

    ptr = &num;        // Pointer ko num ka address diya gaya hai

    cout << "Value of num = " << num << endl;      // Direct value display

    cout << "Value using pointer (*ptr) = " << *ptr << endl;   // Dereference karke value display

    return 0;      // Program successful end
}
