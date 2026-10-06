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

int main() {

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

    cout << "unsigned int: "
         << sizeof(unsigned int)
         << " byte(s)" << endl;

    cout << "long int: "
         << sizeof(long int)
         << " byte(s)" << endl;

    cout << "long long int: "
         << sizeof(long long int)
         << " byte(s)" << endl;

   

    return 0;
}