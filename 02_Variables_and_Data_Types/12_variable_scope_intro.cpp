#include <iostream>
using namespace std;

/*
    Topic: Variable Scope in C++

    Scope determines where a variable can be accessed
    inside a program.

    In this introductory example, we will look at:

        1. Local Scope
        2. Block Scope
        3. Global Scope

    Understanding scope helps prevent naming conflicts
    and makes programs easier to manage.
*/


// Global variable
// It can be accessed by functions in this file
// after its declaration.
int globalNumber = 100;


int main() {

    /*
        1. Local Scope

        A variable declared inside a function belongs
        to that function.

        It can only be accessed inside that function.
    */

    int localNumber = 20;

    cout << "Local variable: "
         << localNumber << endl;


    /*
        The global variable can also be accessed here.
    */

    cout << "Global variable: "
         << globalNumber << endl;



    return 0;
}