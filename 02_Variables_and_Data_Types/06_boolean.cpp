#include <iostream>
using namespace std;

/*
    Topic: Boolean Data Type in C++

    The bool data type is used to represent one of two values:

        true
        false

    Boolean values are commonly used in:

        Conditions
        Comparisons
        Decision making
        Loops
        Flags

    Internally:

        true  -> usually represented as 1
        false -> usually represented as 0
*/

int main() {

    bool isStudent = true;
    bool isLoggedIn = false;
    bool hasPermission = true;

    cout << "Boolean Values" << endl;
    cout << "--------------" << endl;

    cout << "Is Student: " << isStudent << endl;
    cout << "Is Logged In: " << isLoggedIn << endl;
    cout << "Has Permission: " << hasPermission << endl;

    /*
        By default, cout displays bool values as:

            true  -> 1
            false -> 0
    */

    cout << "\nUsing boolalpha" << endl;
    cout << "---------------" << endl;

    cout << boolalpha;

    cout << "Is Student: " << isStudent << endl;
    cout << "Is Logged In: " << isLoggedIn << endl;
    cout << "Has Permission: " << hasPermission << endl;

    /*
        Boolean values can also come from comparisons.
    */

    int age = 20;

    bool isAdult = age >= 18;

    cout << "\nComparison Example" << endl;
    cout << "------------------" << endl;

    cout << "Age: " << age << endl;
    cout << "Is Adult: " << isAdult << endl;

        /*
        Another example:
    */

    int marks = 75;
    bool hasPassed = marks >= 50;

    cout << "\nMarks: " << marks << endl;
    cout << "Passed: " << hasPassed << endl;

    cout << "\nMemory Size" << endl;
    cout << "-----------" << endl;

    cout << "Size of bool: "
         << sizeof(bool)
         << " byte(s)" << endl;

    return 0;
}