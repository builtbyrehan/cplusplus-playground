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
/*
How it works
1. The program asks the user to enter their age.
2. cin stores the input in the  variable.age
3. The condition  checks whether the age is at least 18.age >= 18
4. If the condition is true, the eligibility message is displayed.
5. If the condition is false, the message inside the  block is skipped.if
6. The final message executes regardless of the condition.



*/