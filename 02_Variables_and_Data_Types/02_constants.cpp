#include <iostream>
using namespace std;

/*
    Topic: Constants in C++

    A constant is a value that cannot be changed after it has been initialized.

    In C++, the const keyword is used to make a variable constant.

    General syntax:

        const data_type variable_name = value;

    Example:

        const double PI = 3.14159;

    Once PI is initialized, its value cannot be changed later in the program.

    Constants are useful when a value should remain fixed throughout
    the execution of a program.

    Examples:
        PI
        Number of days in a week
        Speed of light
        Maximum allowed value
        Tax rate
*/

int main() {

    // Declaring constants
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;
    const int MONTHS_IN_YEAR = 12;
    const double GRAVITY = 9.81;

    // Displaying constant values
    cout << "Value of PI: " << PI << endl;
    cout << "Days in a week: " << DAYS_IN_WEEK << endl;
    cout << "Months in a year: " << MONTHS_IN_YEAR << endl;
    cout << "Gravity: " << GRAVITY << " m/s^2" << endl;



    return 0;
}