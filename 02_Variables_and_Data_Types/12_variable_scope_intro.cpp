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


    /*
        2. Block Scope

        A variable declared inside a block { }
        can only be accessed inside that block.
    */

    {
        int blockNumber = 50;

        cout << "\nInside the block" << endl;
        cout << "Block variable: "
             << blockNumber << endl;
    }


    /*
        This would cause an error:

            cout << blockNumber;

        because blockNumber exists only inside
        the block where it was declared.
    */


    /*
        3. Same Variable Name in Different Scopes

        A local variable can have the same name
        as a global variable.

        The local variable takes priority inside
        its own scope.
    */
    int globalNumber = 25;

    cout << "\nScope Example" << endl;
    cout << "-------------" << endl;

    cout << "Local globalNumber: "
         << globalNumber << endl;


    /*
        The scope resolution operator ::

        can be used to access the global version
        when a local variable has the same name.
    */

    cout << "Actual global globalNumber: "
         << ::globalNumber << endl;


    /*
        Key Idea:

        Global Scope
            -> accessible across functions in the file
               after declaration

        Local Scope
            -> accessible inside a function

        Block Scope
            -> accessible only inside { }

        In general, prefer variables with the
        smallest practical scope.
    */


    return 0;
}