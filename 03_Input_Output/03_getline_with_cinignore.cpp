#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter age: ";
    cin >> age;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    /*home task
    1. Do experiment with behaviour of cin.ignore() differently by making changes
    and see how it influence the input stream... */

    return 0;
}