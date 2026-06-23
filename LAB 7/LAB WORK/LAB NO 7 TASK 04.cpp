// Name: Muhammad Yahya Afridi
// Registration Number: BF25NWELEO755
// Department: Electrical
// Section: Power

#include <iostream>
using namespace std;

int main() {

    int numbers[5];     // yeh integer array hai jismein 5 numbers store kiye jayenge
    int sum = 0;        // yeh variable total sum store karega

    // user se numbers lena
    cout << "Enter 5 numbers:" << endl;   // user ko input dene ke liye keh raha hai
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];               // user se ek ek number input le raha hai
    }

    // sum calculate karna
    for(int i = 0; i < 5; i++) {         // yeh loop sab numbers ko add karega
        sum = sum + numbers[i];          // har number ko sum mein add kar raha hai
    }

    // result display karna
    cout << "Sum of array is: " << sum << endl;   // total sum screen par show kar raha hai

    return 0;   // program successfully end ho gaya
}
