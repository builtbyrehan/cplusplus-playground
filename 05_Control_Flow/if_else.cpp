// 1. What is an if-else statement?
// An  statement allows a program to choose between two alternatives:if-else
// - if: Executes when the condition is .true
// - else: Executes when the condition is .false



/*Syntax: 

if (condition) {
    // Executes if the condition is true
} else {
    // Executes if the condition is false
} */

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    cout << "Program finished." << endl;

    return 0;
}