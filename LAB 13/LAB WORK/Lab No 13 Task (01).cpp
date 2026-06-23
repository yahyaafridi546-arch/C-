/*
----------------------------------------------------
Name: Muhammad YAHYA AFRIDI
Registration No: BF25NWELE0755
Department: Electrical Engineering
Section: Power
PROGRAM TITLE: Structure Declaration and Initialization
----------------------------------------------------
*/

#include <iostream>
using namespace std;

struct Person
{
    string name;      // name store karne ke liye variable
    int age;          // age store karne ke liye variable
    string address;   // address store karne ke liye variable
};

int main()
{
    // Person type ka variable banaya gaya
    Person person1;

    // members ko values assign ki gayi hain
    person1.name = "Muhammad Huzaifa";     // name assign kiya
    person1.age = 18;                      // age 18 set ki gayi hai
    person1.address = "Shabqadar";         // address assign kiya

    // values display ki ja rahi hain dot notation se
    cout << "Name: " << person1.name << endl;        // name print ho raha hai
    cout << "Age: " << person1.age << endl;          // age print ho rahi hai
    cout << "Address: " << person1.address << endl;  // address print ho raha hai

    return 0;  // program end
}
