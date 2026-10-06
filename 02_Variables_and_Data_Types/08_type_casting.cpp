#include <iostream>
using namespace std;

/*
    Topic: Type Casting in C++

    Type casting means converting a value from one data type
    into another data type.

    C++ mainly supports two common forms:

    1. Implicit Type Casting
       Conversion happens automatically.

    2. Explicit Type Casting
       Conversion is performed manually by the programmer.

    Modern C++ commonly uses:

        static_cast<type>(value)

    for explicit conversions.
*/

int main() {

    /*
        1. Implicit Type Casting

        C++ automatically converts the integer value
        into a double.
    */

    int wholeNumber = 10;
    double decimalNumber = wholeNumber;

    cout << "Implicit Type Casting" << endl;
    cout << "---------------------" << endl;

    cout << "Integer value: " << wholeNumber << endl;
    cout << "Converted to double: " << decimalNumber << endl;

    /*
        2. Explicit Type Casting

        We manually convert a double into an int.

        The decimal part is removed.
    */


    return 0;
}