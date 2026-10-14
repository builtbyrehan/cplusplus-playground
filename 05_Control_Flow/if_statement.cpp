#include <iostream>
using namespace std;

int main() { // start of main func
    int age; // declaration of variable

    cout << "Enter your age: ";
    cin >> age; // input 

    if (age >= 18) { // if block of code
        cout << "You are eligible to vote." << endl;
    } // end of if block of code

    cout << "Program finished." << endl;

    return 0;
} // end of main func