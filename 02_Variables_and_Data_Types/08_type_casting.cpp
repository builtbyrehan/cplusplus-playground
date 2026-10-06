#include <iostream>
using namespace std;

/*
    Topic: Type Casting in C++

    Type casting means converting a value from one data type
    into another data type.

    C++ mainly supports two common forms:

    1. Implicit Type Casting
       Conversion happens automatically.

    2. Explicit Type Casting
       Conversion is performed manually by the programmer.

    Modern C++ commonly uses:

        static_cast<type>(value)

    for explicit conversions.
*/

int main() {

    /*
        1. Implicit Type Casting

        C++ automatically converts the integer value
        into a double.
    */

    int wholeNumber = 10;
    double decimalNumber = wholeNumber;

    cout << "Implicit Type Casting" << endl;
    cout << "---------------------" << endl;

    cout << "Integer value: " << wholeNumber << endl;
    cout << "Converted to double: " << decimalNumber << endl;

    /*
        2. Explicit Type Casting

        We manually convert a double into an int.

        The decimal part is removed.
    */
    
    double price = 99.75;

    int convertedPrice = static_cast<int>(price);

    cout << "\nExplicit Type Casting" << endl;
    cout << "---------------------" << endl;

    cout << "Original double value: " << price << endl;
    cout << "Converted integer value: " << convertedPrice << endl;

    /*
        Division Example

        Integer division removes the decimal portion.
    */

    int a = 5;
    int b = 2;

    cout << "\nInteger Division" << endl;
    cout << "----------------" << endl;

    cout << "5 / 2 = " << a / b << endl;

    /*
        We can cast one operand to double
        to get a decimal result.
    */

    double result = static_cast<double>(a) / b;

    cout << "\nDivision After Casting" << endl;
    cout << "----------------------" << endl;

    cout << "5 / 2 = " << result << endl;

    /*
        Character to Integer

        A char can be converted to its numeric character code.
    */

    char letter = 'A';

    int characterCode = static_cast<int>(letter);

    cout << "\nCharacter Casting" << endl;
    cout << "-----------------" << endl;

    cout << "Character: " << letter << endl;
    cout << "Numeric code: " << characterCode << endl;

    /*
        Important:

        Type casting can sometimes cause loss of information.

        Example:

            double value = 10.99;

            int number = static_cast<int>(value);

        Result:

            number = 10

        The decimal portion is lost.
    */

    return 0;
}