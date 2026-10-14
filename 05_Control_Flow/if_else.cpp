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

int main() { // start of main func
    int age; // var declaration

    cout << "Enter your age: ";
    cin >> age; // input

    if (age >= 18) { // if block of code 
        cout << "You are eligible to vote." << endl;
    } else { // else block of code
        cout << "You are not eligible to vote." << endl;
    } // end of conditionals

    cout << "Program finished." << endl;

    return 0;
} // end of main function 