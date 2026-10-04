#include <iostream>

/*
    Topic: Common Syntax Errors in C++

    Syntax errors happen when code does not follow
    the grammatical rules of the C++ language.

    Common syntax errors include:

    1. Missing semicolon
    2. Missing quotation marks
    3. Missing parentheses
    4. Missing curly braces
    5. Misspelled keywords
    6. Incorrect use of operators
*/

int main() {

    // Correct statement
    std::cout << "Learning common syntax errors in C++." << std::endl;

    /*
        Example 1: Missing semicolon

        Incorrect:
            std::cout << "Hello"

        Correct:
            std::cout << "Hello";
    */

    /*
        Example 2: Missing quotation mark

        Incorrect:
            std::cout << "Hello;

        Correct:
            std::cout << "Hello";
    */

    /*
        Example 3: Missing parenthesis

        Incorrect:
            if (5 > 3 {
                std::cout << "True";
            }

        Correct:
            if (5 > 3) {
                std::cout << "True";
            }
    */

    /*
        Example 4: Missing curly brace

        Incorrect:
            int main() {
                std::cout << "Hello";

        Correct:
            int main() {
                std::cout << "Hello";
            }
    */

    /*
        Example 5: Misspelled keyword

        Incorrect:
            retrun 0;

        Correct:
            return 0;
    */

    /*
        Example 6: Incorrect stream operator

        Incorrect:
            std::cout >> "Hello";

        Correct:
            std::cout << "Hello";
    */

    std::cout << "Syntax errors must be fixed before successful compilation." << std::endl;

    return 0;
}