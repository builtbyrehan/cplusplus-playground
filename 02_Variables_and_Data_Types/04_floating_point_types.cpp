#include <iostream>
#include <iomanip>
using namespace std;

/*
    Topic: Floating-Point Data Types in C++

    Floating-point data types are used to store numbers
    that contain decimal values.

    Examples:

        3.14
        9.81
        -2.5
        100.75

    C++ mainly provides three floating-point types:

        float
        double
        long double

    float:
        Uses less memory but provides lower precision.

    double:
        Provides greater precision than float and is
        commonly used for decimal values.

    long double:
        May provide even greater precision depending
        on the compiler and system.

    Important:
        Floating-point values are approximations,
        so some decimal numbers cannot be represented exactly.
*/

int main() {

    // Floating-point variables
    float temperature = 36.5f;
    double pi = 3.141592653589793;
    long double preciseValue = 3.141592653589793238L;

    cout << "Floating-Point Values" << endl;
    cout << "---------------------" << endl;

    cout << "float value: " << temperature << endl;
    cout << "double value: " << pi << endl;
    cout << "long double value: " << preciseValue << endl;

    cout << "\nMemory Size" << endl;
    cout << "-----------" << endl;

    cout << "float: "
         << sizeof(float)
         << " bytes" << endl;



    /*
        setprecision() allows us to control how many
        significant digits are displayed.
    */

    cout << "\nPrecision Example" << endl;
    cout << "-----------------" << endl;

    cout << setprecision(5);
    cout << "PI with precision 5: " << pi << endl;

    cout << setprecision(15);
    cout << "PI with precision 15: " << pi << endl;

    /*
        The suffix 'f' tells C++ that a decimal literal
        should be treated as a float.

        Example:
            float value = 5.5f;

        The suffix 'L' represents a long double.

        Example:
            long double value = 5.5L;
    */

    return 0;
}