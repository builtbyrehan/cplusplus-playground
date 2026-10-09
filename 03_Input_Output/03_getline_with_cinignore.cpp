#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() { // start of main function
    int age; // variables declaration
    string name;

    cout << "Enter age: ";// displaying message
    cin >> age; // input

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignoring input buffer

    cout << "Enter full name: ";
    getline(cin, name);// taking input

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl; // display

    /*home task
    1. Do experiment with behaviour of cin.ignore() differently by making changes
    and see how it influence the input stream... */

    return 0; // exit code
} // end of main function 