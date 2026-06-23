// NAME: MUHAMMAD YAHYA AFRIDI
// REGISTRATION NO: BF25NWELE0755
// DEPARTMENT: ELECTRICAL
// SECTION: POWER
// PROGRAM: SUM FROM 1 TO N USING FOR LOOP

#include <iostream>              // input output library use karne ke liye
using namespace std;             // standard namespace use karne ke liye

int main() {                     // program ka start point

    int n, sum = 0;             // n input ke liye, sum initial 0

    cout << "Enter a positive integer: ";   // user se input mang raha hai
    cin >> n;                                // user input store karega

    for (int i = 1; i <= n; i++) {          // 1 se n tak loop chalega
        sum = sum + i;                      // har number add hota jayega
    }

    cout << "Sum = " << sum << endl;        // final result display karega

    return 0;                               // program end
}
