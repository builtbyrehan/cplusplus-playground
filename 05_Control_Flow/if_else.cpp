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


/*

3. Example outputs
Example A: Condition is true
Enter your age: 20
You are eligible to vote.
Program finished.



Example B: Condition is false
Enter your age: 16
You are not eligible to vote.
Program finished.

Important distinction 
if                                              	if-else
Executes code if a condition is true.	Chooses between two branches.
Does nothing when false, unless later code handles it.	Executes the  branch when false.else
Useful for optional actions.	Useful when both outcomes need handling.


Practice exercises
Try these without looking up solutions.
Exercise tracker
0/4

[ ] 1. Even or odd
Input an integer. Use if-else to print whether it is even or odd.


[ ] 2. Positive or non-positive
Input a number. Print whether it is positive or non-positive.


[ ] 3. Pass or fail
Input marks. Print “Pass” if marks are at least 50; otherwise, print “Fail”.


[ ] 4. Larger number
Input two integers and use if-else to print the larger number. If equal, either number may be printed as the larger value.
*/