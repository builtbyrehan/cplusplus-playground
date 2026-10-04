#include <iostream>

/*
    Topic: First Complete C++ Program

    This program brings together the basic concepts covered
    in the Getting Started section.

    Concepts reviewed:

    1. Header files
    2. The main() function
    3. Comments
    4. The std namespace
    5. Standard output using std::cout
    6. Escape sequences
    7. Multiple output statements
    8. Program termination using return 0

    This acts as a checkpoint before moving to
    Variables and Data Types.
*/

int main() {

    // Display a simple heading
    std::cout << "==================================" << std::endl;
    std::cout << "          C++ MASTERY             " << std::endl;
    std::cout << "==================================" << std::endl;

    // Display learning progress
    std::cout << "Section:\tGetting Started" << std::endl;
    std::cout << "Status:\t\tCompleted" << std::endl;

    // Demonstrating escape sequences
    std::cout << "\nTopics Covered:" << std::endl;

    std::cout << "1. Hello World" << std::endl;
    std::cout << "2. Comments" << std::endl;
    std::cout << "3. Program Structure" << std::endl;
    std::cout << "4. Namespaces" << std::endl;
    std::cout << "5. main() Function" << std::endl;
    std::cout << "6. Compilation and Execution" << std::endl;
    std::cout << "7. Escape Sequences" << std::endl;
    std::cout << "8. Multiple Output Statements" << std::endl;
    std::cout << "9. Standard Output Streams" << std::endl;
    std::cout << "10. Basic Input Preview" << std::endl;
    std::cout << "11. Exit Status" << std::endl;
    std::cout << "12. Common Syntax Errors" << std::endl;
    std::cout << "13. Preprocessor Basics" << std::endl;

    // Final message
    std::cout << "\nGetting Started section completed successfully!" << std::endl;
    std::cout << "Next topic: Variables and Data Types" << std::endl;

    return 0;
}