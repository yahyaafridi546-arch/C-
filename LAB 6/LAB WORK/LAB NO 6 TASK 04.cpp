// NAME: MUHAMMAD YAHYA AFRIDI
// REGISTRATION NO: BF25NWELE0755
// DEPARTMENT: ELECTRICAL
// SECTION: POWER
// PROGRAM: TRIANGLE PATTERN USING NESTED FOR LOOP

#include <iostream>              // input output library use karne ke liye
using namespace std;             // standard namespace use karne ke liye

int main() {                     // program ka start point

    int rows;                   // rows store karne ke liye variable

    cout << "Enter number of rows: ";   // user se rows input mang raha hai
    cin >> rows;                        // user input store karega

    for (int i = 1; i <= rows; i++) {   // outer loop (rows control karta hai)

        for (int j = 1; j <= i; j++) {  // inner loop (stars print karega)

            cout << "* ";               // star print karega

        }

        cout << endl;                   // har row ke baad new line

    }

    return 0;                           // program end
}
