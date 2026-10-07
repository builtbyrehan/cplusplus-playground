#include <iostream>
#include <limits>

int main() {

    // --------------------------------
    // Integer types
    // --------------------------------

    std::cout << "int:\n";
    std::cout << "Minimum: "
              << std::numeric_limits<int>::min() << '\n';
    std::cout << "Maximum: "
              << std::numeric_limits<int>::max() << '\n';
    std::cout << "Digits: "
              << std::numeric_limits<int>::digits << '\n';




    // --------------------------------
    // Unsigned integer
    // --------------------------------

    std::cout << "\nunsigned int:\n";
    std::cout << "Minimum: "
              << std::numeric_limits<unsigned int>::min() << '\n';
    std::cout << "Maximum: "
              << std::numeric_limits<unsigned int>::max() << '\n';


    // --------------------------------
    // Floating-point types
    // --------------------------------

    std::cout << "\ndouble:\n";

    std::cout << "Lowest: "
              << std::numeric_limits<double>::lowest() << '\n';

    std::cout << "Maximum: "
              << std::numeric_limits<double>::max() << '\n';

    std::cout << "Lowest positive value: "
              << std::numeric_limits<double>::min() << '\n';

    std::cout << "Precision: "
              << std::numeric_limits<double>::digits10 << " digits\n";


    // --------------------------------
    // Boolean type information
    // --------------------------------

    std::cout << "\nbool:\n";

    std::cout << "Minimum: "
              << std::numeric_limits<bool>::min() << '\n';

    std::cout << "Maximum: "
              << std::numeric_limits<bool>::max() << '\n';


    // --------------------------------
    // Type properties
    // --------------------------------

    std::cout << "\nType properties:\n";


    return 0;
}