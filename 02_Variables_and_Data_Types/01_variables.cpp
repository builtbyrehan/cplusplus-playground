#include <iostream>

/*
    Topic: Variables in C++

    A variable is a named location in memory used to store data.

    General syntax:

        data_type variable_name = value;

    Example:

        int age = 20;

    Here:

        int   -> data type
        age   -> variable name
        20    -> value stored in the variable
*/

int main() {

    int age = 20;
    double height = 5.9;
    char grade = 'A';
    bool isStudent = true;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Student: " << isStudent << std::endl;

    // A variable's value can be changed.
    age = 21;

    std::cout << "\nUpdated Age: " << age << std::endl;

    return 0;
}