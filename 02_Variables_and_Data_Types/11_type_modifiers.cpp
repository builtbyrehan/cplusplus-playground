#include <iostream>
using namespace std;

/*
    Topic: Type Modifiers in C++

    Type modifiers are used to modify the properties of
    certain built-in data types.

    Common type modifiers include:

        signed
        unsigned
        short
        long

    They are mainly used with integer types.

    Examples:

        short int
        long int
        long long int
        signed int
        unsigned int

    The exact size and range of these types can depend
    on the compiler and system.
*/

int main() { // start of main function 

    // signed can store negative and positive values
    signed int temperature = -15;

    // unsigned stores only non-negative values
    unsigned int population = 5000;

    // short is generally used for smaller integer ranges
    short int smallNumber = 32000;

    // long can support a wider range than int on some systems
    long int largeNumber = 1000000;

    // long long is intended for very large whole numbers
    long long int veryLargeNumber = 9000000000LL;

    cout << "Type Modifier Examples" << endl;
    cout << "----------------------" << endl;

    cout << "Signed int: " << temperature << endl;
    cout << "Unsigned int: " << population << endl;
    cout << "Short int: " << smallNumber << endl;
    cout << "Long int: " << largeNumber << endl;
    cout << "Long long int: " << veryLargeNumber << endl;

    /*
        Memory sizes can vary between systems.

        sizeof() allows us to check the size
        on the current machine.
    */
    
    cout << "\nMemory Sizes" << endl;
    cout << "------------" << endl;

    cout << "short int: "
         << sizeof(short int)
         << " byte(s)" << endl;

    cout << "int: "
         << sizeof(int)
         << " byte(s)" << endl;


 /*
        Modifiers can often be written in shorter forms.

        These are equivalent:

            short int number;
            short number;

            long int number;
            long number;

            unsigned int number;
            unsigned number;
    */

    short shortValue = 100; // variable initialization
    long longValue = 500000;
    unsigned unsignedValue = 200;

    cout << "\nShort Forms" << endl;
    cout << "-----------" << endl;

    cout << "short: " << shortValue << endl;
    cout << "long: " << longValue << endl;
    cout << "unsigned: " << unsignedValue << endl;

    /*
        long can also be used with double.

        long double may provide greater precision
        than double depending on the implementation.
    */

    long double preciseValue = 3.141592653589793238L;

    cout << "\nLong Double" << endl;
    cout << "-----------" << endl;

    cout << "Value: " << preciseValue << endl;
    cout << "Size: "
         << sizeof(long double)
         << " byte(s)" << endl;

    /*
        Important:

        unsigned values should not be used just because
        a value is expected to be positive.

        Mixing signed and unsigned values can sometimes
        produce unexpected results.

        Choose a type according to the actual requirements
        of the program.
    */


    return 0;
} // end of main function 