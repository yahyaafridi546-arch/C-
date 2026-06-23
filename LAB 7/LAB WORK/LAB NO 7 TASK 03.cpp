// Name: Muhammad Yahya Afridi
// Registration Number: BF25NWELEO755
// Department: Electrical
// Section: Power

#include <iostream>
using namespace std;

int main() {

    int source[5] = {10, 20, 30, 40, 50};   // yeh source array hai jismein values pehle se store ki gayi hain
    int destination[5];                     // yeh destination array hai jismein values copy ki jayengi

    // source array ko display karna
    cout << "Source Array:" << endl;        // yeh heading source array ke liye hai
    for(int i = 0; i < 5; i++) {
        cout << source[i] << endl;          // yeh source array ke elements show karta hai
    }

    // array copy karna
    for(int i = 0; i < 5; i++) {           // yeh loop source se destination mein copy karta hai
        destination[i] = source[i];        // yeh ek ek value copy kar raha hai
    }

    // destination array ko display karna
    cout << "Destination Array:" << endl;  // yeh heading destination array ke liye hai
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << endl;    // yeh copied values show karta hai
    }

    return 0;   // program successfully end ho gaya
}
