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



    return 0;
}