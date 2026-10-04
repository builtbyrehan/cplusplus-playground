#include <iostream>

/*
    Topic: Standard Output Streams in C++

    C++ provides different output streams for different purposes.

    std::cout
        Used for normal program output.

    std::cerr
        Used for error messages.
        It is typically unbuffered, so the message is shown immediately.

    std::clog
        Used for logging or diagnostic messages.
        It is usually buffered.

    These streams are part of the std namespace.
*/

int main() {

    // Normal output
    std::cout << "This is a normal output message." << std::endl;

    // Error output
    std::cerr << "This is an error message." << std::endl;

    // Log / diagnostic output
    std::clog << "This is a log message." << std::endl;

    return 0;
}