#include <iostream>
using namespace std;

/*
    Topic: Character Data Type in C++

    The char data type is used to store a single character.

    Examples:

        'A'
        'b'
        '7'
        '@'

    Important:
        A character is written inside single quotes.

        Correct:
            char grade = 'A';

        Incorrect:
            char grade = "A";

    Double quotes are generally used for strings,
    while single quotes are used for individual characters.

    A char value is internally represented by a numeric
    character code, commonly from ASCII for basic characters.
*/

int main() {

    // Initialization of character variables
    char grade = 'A';
    char initial = 'R';
    char symbol = '@';
    char digit = '7';

    cout << "Character Values" << endl;
    cout << "----------------" << endl;

    cout << "Grade: " << grade << endl;
    cout << "Initial: " << initial << endl;
    cout << "Symbol: " << symbol << endl;
    cout << "Digit character: " << digit << endl;

    
    /*
        A char can also be converted to its numeric code.
    */

    cout << "\nCharacter Codes" << endl;
    cout << "---------------" << endl;

    cout << "Code of " << grade << ": "
         << static_cast<int>(grade) << endl;

    cout << "Code of " << initial << ": "
         << static_cast<int>(initial) << endl;

    cout << "Code of " << digit << ": "
         << static_cast<int>(digit) << endl;
     /*
        We can also create a char using a numeric code.

        Example:
            char letter = 65;

        On systems using ASCII-compatible character encoding,
        65 represents 'A'.
    */

    char letter = 65;

    cout << "\nCharacter from code 65: "
         << letter << endl;

    cout << "\nMemory Size" << endl;
    cout << "-----------" << endl;

    cout << "Size of char: "
         << sizeof(char)
         << " byte" << endl;
   
    return 0;
}