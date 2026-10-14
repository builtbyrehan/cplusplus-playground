// 1. What is an  statement?else-if
// An  statement lets us check multiple conditions and execute the else-ifblock associated with the first condition that evaluates to .true
// For example, suppose you want to assign grades based on a student's marks:
// - 90 or above → Grade A
// - 80 or above → Grade B
// - 70 or above → Grade C
// - 60 or above → Grade D
// - Below 60 → Grade F
// Checking each possibility with a separate  could execute multiple blocks. An  chain selects only the first matching branch.ifif-else-if

/*Syntax
if (condition1) {
    // Executes if condition1 is true
} else if (condition2) {
    // Executes if condition1 is false
    // and condition2 is true
} else if (condition3) {
    // Executes if the earlier conditions are false
    // and condition3 is true
} else {
    // Executes if no condition is true
}*/

#include <iostream>
using namespace std;

int main() {  // start of main function 
    int marks; // declaration 

    cout << "Enter your marks (0-100): ";
    cin >> marks; // input

    if (marks < 0 || marks > 100) { // start of main function 
        cout << "Invalid marks." << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    } // end of conditional block of co

    return 0; // return code exit
} // end of main function 


/*
3. Example outputs
Input: 95
Grade A

Enter your marks (0-100): 95
Grade: A



Input: 83
Grade B

Enter your marks (0-100): 83
Grade: B



Input: 55
Grade F

Enter your marks (0-100): 55
Grade: F



Input: 105
Enter your marks (0-100): 105
Invalid marks.


Why does the order matter?
Consider this incorrect code:
if (marks >= 60) {
    cout << "Grade D or above";
} else if (marks >= 90) {
    cout << "Grade A";
}


If the user enters , the first condition is already true, so the program never reaches the Grade A condition.95
Rule: When conditions overlap, check the more restrictive or higher-threshold conditions first.


Practice exercises
Practice tracker
0/4 completed

[ ] 1. Temperature classification
Input temperature. Print Cold below 15, Moderate from 15 to 29, and Hot at 30 or above.


[ ] 2. Age categories
Classify an age as Child (under 13), Teenager (13–19), or Adult (20 and above). Handle negative ages as invalid.


[ ] 3. Electricity billing
Input units and assign a category: Low (0–100), Medium (101–300), or High (above 300). Reject negative units.


[ ] 4. Number comparison
Input two integers and print whether the first is greater, the second is greater, or both are equal.
*/