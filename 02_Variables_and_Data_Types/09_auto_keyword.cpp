#include <iostream>
#include <string>
using namespace std;

/*
    Topic: auto Keyword in C++

    The auto keyword allows the compiler to automatically
    determine the data type of a variable from its value.

    General syntax:

        auto variableName = value;

    Example:

        auto age = 20;

    The compiler determines that age is an int.

    Important:
        auto does NOT mean that the variable has no type.
        The compiler still assigns a specific type to it.

    auto was introduced as a major feature in modern C++
    and is commonly used when the type is obvious or lengthy.
*/

int main() {

    // Compiler determines the type automatically
    auto age = 20;
    auto price = 99.99;
    auto grade = 'A';
    auto isStudent = true;
    auto name = string("Rehan");

    cout << "Values Using auto" << endl;
    cout << "-----------------" << endl;

    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << boolalpha << isStudent << endl;
    cout << "Name: " << name << endl;

    /*
        The inferred types are approximately:

        auto age = 20;
        -> int

        auto price = 99.99;
        -> double

        auto grade = 'A';
        -> char

        auto isStudent = true;
        -> bool

        auto name = string("Rehan");
        -> string
    */

    cout << "\nMemory Sizes" << endl;
    cout << "------------" << endl;

    cout << "age: " << sizeof(age) << " byte(s)" << endl;
    cout << "price: " << sizeof(price) << " byte(s)" << endl;
    cout << "grade: " << sizeof(grade) << " byte(s)" << endl;
    cout << "isStudent: " << sizeof(isStudent) << " byte(s)" << endl;



    return 0;
}