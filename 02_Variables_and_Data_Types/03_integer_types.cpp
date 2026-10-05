#include <iostream>
using namespace std;

/*
    Topic: Integer Data Types in C++

    Integer data types are used to store whole numbers.

    Examples:

        -10
        0
        25
        1000

    C++ provides several integer types with different
    sizes and ranges.

    Common integer types:

        short
        int
        long
        long long

    We can also use:

        signed
        unsigned

    signed:
        Can store both negative and positive values.

    unsigned:
        Stores only zero and positive values.

    Note:
        The exact size of an integer type can depend on
        the compiler and system.

    sizeof() can be used to check the number of bytes
    used by a data type on the current system.
*/

int main() {

    // Basic integer types
    short smallNumber = 100;
    int age = 20;
    long population = 1000000;
    long long largeNumber = 9000000000LL;

    // Signed integer
    signed int temperature = -15;

    // Unsigned integer
    unsigned int students = 250;

    cout << "Integer Values" << endl;
    cout << "--------------" << endl;

    cout << "short: " << smallNumber << endl;
    cout << "int: " << age << endl;
    cout << "long: " << population << endl;
    cout << "long long: " << largeNumber << endl;
    cout << "signed int: " << temperature << endl;
    cout << "unsigned int: " << students << endl;


    return 0;
}