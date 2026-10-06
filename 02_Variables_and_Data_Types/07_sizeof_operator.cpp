#include <iostream>
using namespace std;

/*
    Topic: sizeof Operator in C++

    The sizeof operator is used to find how much memory
    a data type or variable occupies.

    The result of sizeof is returned in bytes.

    General syntax:

        sizeof(data_type)

    or:

        sizeof(variable)

    Important:
        The exact size of some data types can vary depending
        on the compiler, operating system, and system architecture.
*/

int main() {

    int age = 20;
    double salary = 55000.50;
    char grade = 'A';
    bool isStudent = true;

    cout << "Size of Data Types" << endl;
    cout << "------------------" << endl;

    cout << "char: "
         << sizeof(char)
         << " byte(s)" << endl;

    cout << "bool: "
         << sizeof(bool)
         << " byte(s)" << endl;

    cout << "short: "
         << sizeof(short)
         << " byte(s)" << endl;

    cout << "int: "
         << sizeof(int)
         << " byte(s)" << endl;

    cout << "long: "
         << sizeof(long)
         << " byte(s)" << endl;

    cout << "long long: "
         << sizeof(long long)
         << " byte(s)" << endl;

    cout << "float: "
         << sizeof(float)
         << " byte(s)" << endl;

    cout << "double: "
         << sizeof(double)
         << " byte(s)" << endl;

    cout << "long double: "
         << sizeof(long double)
         << " byte(s)" << endl;

    /*
        sizeof can also be used with variables.
    */

    cout << "\nSize of Variables" << endl;
    cout << "-----------------" << endl;

    cout << "age: "
         << sizeof(age)
         << " byte(s)" << endl;

    cout << "salary: "
         << sizeof(salary)
         << " byte(s)" << endl;

    cout << "grade: "
         << sizeof(grade)
         << " byte(s)" << endl;

    cout << "isStudent: "
         << sizeof(isStudent)
         << " byte(s)" << endl;

    /*
        sizeof does not return the value stored in a variable.
        It returns the amount of memory used by its type.
    */

    return 0;
}