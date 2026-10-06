#include <iostream>
using namespace std;

/*
    Topic: const Keyword in C++

    The const keyword is used to make a variable read-only
    after it has been initialized.

    General syntax:

        const data_type variable_name = value;

    Example:

        const int MAX_USERS = 100;

    Once a variable is declared as const, its value
    cannot be changed later in the program.

    Constants are useful when a value should remain fixed.
*/

int main() {

    const int DAYS_IN_WEEK = 7;
    const double PI = 3.14159;
    const char GRADE = 'A';

    cout << "Constant Values" << endl;
    cout << "---------------" << endl;

    cout << "Days in a week: " << DAYS_IN_WEEK << endl;
    cout << "Value of PI: " << PI << endl;
    cout << "Grade: " << GRADE << endl;

    /*
        Trying to change a const variable causes
        a compilation error.

        Example:

            DAYS_IN_WEEK = 8;

        This is invalid because DAYS_IN_WEEK
        was declared as const.
    */

    /*
        A const variable should normally be initialized
        when it is declared.

        Correct:

            const int MAX_SCORE = 100;

        Incorrect:

            const int MAX_SCORE;
    */

    const int MAX_SCORE = 100;

    cout << "\nMaximum Score: " << MAX_SCORE << endl;

    /*
        const can also be used with auto.

        Example:

            const auto TAX_RATE = 0.15;

        The compiler determines the type,
        but the variable remains read-only.
    */

    const auto TAX_RATE = 0.15;

    cout << "Tax Rate: " << TAX_RATE << endl;

    /*
        Why use const?

        1. Prevent accidental modification
        2. Make code easier to understand
        3. Clearly indicate fixed values
        4. Improve code safety
        5. Make program intent more obvious
    */

    return 0;
}