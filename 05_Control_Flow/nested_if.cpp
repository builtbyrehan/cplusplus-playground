// 1. What is a nested  statement?if
// A nested if statement is an  statement placed inside another  or ififelse block.
// It is useful when a program must check a second condition only after the first condition has been satisfied.
// For example, imagine a login system:
// 1. Check whether the username is correct.
// 2. If it is correct, check whether the password is correct.
// 3. Grant access only when both are correct.

/**


Syntax
if (condition1) {
    if (condition2) {
        // Executes if both conditions are true
    }
}*/

#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasLicense;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a driving license? (1 = Yes, 0 = No): ";
    cin >> hasLicense;

    if (age >= 18) {
        cout << "Age requirement satisfied." << endl;

        if (hasLicense) {
            cout << "You are eligible to drive." << endl;
        } else {
            cout << "You need a driving license." << endl;
        }
    } else {
        cout << "You are too young to drive." << endl;
    }

    return 0;
}