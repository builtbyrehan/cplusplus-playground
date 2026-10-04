#include <iostream>

/*
    Topic: Namespaces in C++

    A namespace is used to organize code and avoid naming conflicts.

    The C++ Standard Library places many commonly used features
    inside the "std" namespace.

    Examples:
        std::cout
        std::cin
        std::endl
        std::string

    Here:
        std::cout  -> cout from the standard namespace
        std::endl  -> endl from the standard namespace

    Instead of writing:
        using namespace std;

    we can explicitly write:
        std::cout
        std::endl

    This is often preferred in larger programs because it makes
    it clear where a name comes from and helps avoid conflicts.
*/

int main() {

    std::cout << "Learning namespaces in C++" << std::endl;

    return 0;
}
