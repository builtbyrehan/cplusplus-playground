#include <iostream>

/*
    Topic: Basic Input Preview in C++

    In C++, std::cin is used to take input from the user.

    This is only a basic introduction to input.
    Input/output will be covered in more detail later.

    Example:

        std::cin >> variable;

    The >> operator is called the extraction operator.
    It takes data from the input stream and stores it
    inside a variable.
*/

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You entered: " << age << std::endl;

    return 0;
}
