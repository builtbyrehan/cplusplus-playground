
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    // Logical AND (&&)
    cout << "Logical AND: "  << (age >= 18 && hasID) << endl;
    /*the and operator says that both values must be TRUE*/
    
        // Logical OR (||)
    cout << "Logical OR: "
         << (age < 18 || hasID) << endl;

         /* we use or operator if we want to just go with only one true value
         for example: 
         you have 2 choices, 
         you can go home, or stay outside
         so this is going to be an OR situation*/

        // Logical NOT (!)
    cout << "Logical NOT: "
         << (!hasID) << endl;

    /*write a program to demostrate the use of all of these operators from any of the real-world problem from your daily life*/



    return 0;
}
