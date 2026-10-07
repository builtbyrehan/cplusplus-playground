#include <iostream>
#include <limits>

int main() {

    // --------------------------------
    // 1. Signed integer
    // --------------------------------

    int signedNumber = -100;

    std::cout << "Signed number: "
              << signedNumber << '\n';


    // --------------------------------
    // 2. Unsigned integer
    // --------------------------------

    unsigned int unsignedNumber = 100;

    std::cout << "Unsigned number: "
              << unsignedNumber << '\n';


    
    // --------------------------------
    // 3. Minimum and maximum values
    // --------------------------------

    std::cout << "\nint range:\n";
    std::cout << "Minimum: "
              << std::numeric_limits<int>::min() << '\n';

    std::cout << "Maximum: "
              << std::numeric_limits<int>::max() << '\n';


    std::cout << "\nunsigned int range:\n";
    std::cout << "Minimum: "
              << std::numeric_limits<unsigned int>::min() << '\n';

    std::cout << "Maximum: "
              << std::numeric_limits<unsigned int>::max() << '\n';


    // --------------------------------
    // 4. Unsigned integers cannot
    //    represent negative values
    // --------------------------------

    unsigned int positiveNumber = 10;

    std::cout << "\nPositive number: "
              << positiveNumber << '\n';

    // Do not do this:
    // unsigned int negativeNumber = -10;

    // The value cannot be represented as a negative
    // unsigned integer.


    // --------------------------------
    // 5. Unsigned integer wrapping
    // --------------------------------

    unsigned int value = 0;

    value--;

    std::cout << "\nUnsigned value after decrementing 0: "
              << value << '\n';


    // --------------------------------
    // 6. Signed vs unsigned comparison
    // --------------------------------

    int signedValue = -1;
    unsigned int unsignedValue = 1;

    std::cout << "\nSigned value: "
              << signedValue << '\n';

    std::cout << "Unsigned value: "
              << unsignedValue << '\n';

    std::cout << "signedValue < unsignedValue: "
              << (signedValue < unsignedValue) << '\n';

    return 0;
}
