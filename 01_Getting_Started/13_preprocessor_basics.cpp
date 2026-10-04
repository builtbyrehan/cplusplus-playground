#include <iostream>

/*
    Topic: Preprocessor Basics in C++

    Before the actual compilation begins, C++ source code is first
    processed by the preprocessor.

    Preprocessor directives usually begin with the # symbol.

    Common examples include:

        #include
        #define
        #ifdef
        #ifndef
        #endif

    In this file, we focus on the basic idea of #include.
*/

int main() {

    /*
        #include <iostream>

        This tells the preprocessor to include the declarations
        needed for standard input and output features.

        Because of <iostream>, we can use:

            std::cout
            std::cin
            std::cerr
            std::clog
    */

    std::cout << "Learning preprocessor basics in C++." << std::endl;

    /*
        The preprocessor runs before the compiler.

        Simplified flow:

        Source Code
            ↓
        Preprocessor
            ↓
        Compiler
            ↓
        Executable
    */

    return 0;
}