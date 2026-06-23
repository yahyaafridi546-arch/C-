// Name: Muhammad YAHYA AFRIDI
// Registration Number: BF25NWELEO755
// Department: Electrical
// Section: Power

#include <iostream>
using namespace std;

int main() {

    char message[] = "HELLO";   // yeh character array hai jismein aik word "HELLO" store kiya gaya hai

    cout << "Characters are:" << endl;   // yeh heading show kar raha hai

    for(int i = 0; message[i] != '\0'; i++) {   // yeh loop tab tak chalega jab tak string khatam na ho jaye
        cout << message[i] << endl;             // yeh har character ko alag line mein print karta hai
    }

    return 0;   // program successfully end ho gaya
}
