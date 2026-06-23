/*
----------------------------------------------------
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical Engineering
Section: Power
PROGRAM TITLE: Structure Declaration and Initialization (Student)

----------------------------------------------------
*/

#include <iostream>
using namespace std;

struct Student
{
    string name;   // student ka naam store karne ke liye variable
    int age;       // student ki age store karne ke liye variable
    char grade;    // student ka grade store karne ke liye variable
};

int main()
{
    // Student type ka variable banaya gaya
    Student student1;

    // members ko values assign ki gayi hain
    student1.name = "Muhammad YAHYA";   // naam assign kiya
    student1.age = 18;                    // age assign ki
    student1.grade = 'A';                 // grade assign kiya

    // structure ke values display ki ja rahi hain
    cout << "Name: " << student1.name << endl;    // name print ho raha hai
    cout << "Age: " << student1.age << endl;      // age print ho rahi hai
    cout << "Grade: " << student1.grade << endl;  // grade print ho raha hai

    return 0;  // program end
}
