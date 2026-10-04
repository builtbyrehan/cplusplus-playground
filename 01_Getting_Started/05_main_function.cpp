#include <iostream>

/*
    Topic: The main() Function in C++

    Every C++ program starts execution from the main() function.

    Syntax:

        int main() {
            // program statements
            return 0;
        }

    Explanation:

    int
        The main function returns an integer value.

    main()
        This is the entry point of the program.
        When the program starts, execution begins here.

    { }
        The curly braces define the body of the function.

    return 0;
        Returning 0 usually tells the operating system
        that the program finished successfully.
*/

int main() {

    std::cout << "Program execution starts from main()." << std::endl;

    return 0;
}