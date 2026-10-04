#include <iostream>

/*
    Topic: Escape Sequences in C++

    Escape sequences are special character combinations
    used inside strings.

    Common examples:

    \n   -> New line
    \t   -> Horizontal tab
    \"   -> Double quotation mark
    \\   -> Backslash
*/

int main() {

    std::cout << "Hello\nWorld" << std::endl;

    std::cout << "Name:\tRehan" << std::endl;

    std::cout << "He said, \"Hello!\"" << std::endl;

    std::cout << "C:\\Users\\Documents" << std::endl;

    return 0;
}