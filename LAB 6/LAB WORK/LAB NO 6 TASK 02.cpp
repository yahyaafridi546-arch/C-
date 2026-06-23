// NAME: MUHAMMAD YAHYA AFRIDI
// REGISTRATION NO: BF25NWELE0755
// DEPARTMENT: ELECTRICAL
// SECTION: POWER
// PROGRAM: MULTIPLICATION TABLES (1 TO 10)

#include <iostream>                        // input output library use karne ke liye
using namespace std;                         // standard namespace use karne ke liye

int main() {                                  // program ka start point

    for (int i = 1; i <= 10; i++) {             // outer loop (table number 1 to 10)

        cout << "TABLE OF " << i << endl;         // table heading print karega
        cout << "--------------------" << endl;   // line separator

        for (int j = 1; j <= 10; j++) {           // inner loop (1 to 10 multiplication)

            cout << i << " x " << j << " = " << i * j << endl; // proper format: 2 x 3 = 6


        }

        cout << endl; // ek table ke baad gap

    }

    return 0; // program end
}
