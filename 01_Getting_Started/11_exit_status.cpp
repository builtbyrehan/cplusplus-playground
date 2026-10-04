#include <iostream>
#include <cstdlib>

/*
    Topic: Exit Status in C++

    A program can return a status code to the operating system
    when it finishes.

    Common values:

        0
        EXIT_SUCCESS

    usually indicate successful execution.

        EXIT_FAILURE

    indicates that the program ended because of an error.

    EXIT_SUCCESS and EXIT_FAILURE are defined in <cstdlib>.
*/

int main() {

    std::cout << "Program executed successfully." << std::endl;

    return EXIT_SUCCESS;
}