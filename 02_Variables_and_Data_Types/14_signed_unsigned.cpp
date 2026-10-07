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



    return 0;
}
