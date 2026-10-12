
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 10;

    // Post-increment
    cout << "Post-increment: " << a++ << endl;
    cout << "Value of a: " << a << endl;

    
    // Pre-increment
    cout << "Pre-increment: " << ++b << endl;
    cout << "Value of b: " << b << endl;

    // Post-decrement
    cout << "Post-decrement: " << a-- << endl;
    cout << "Value of a: " << a << endl;

    // Pre-decrement
    cout << "Pre-decrement: " << --b << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}
