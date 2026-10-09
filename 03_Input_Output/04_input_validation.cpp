
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";

    while (!(cin >> age) || age < 0 || age > 120) {
        if (cin.fail()) {
            cout << "Invalid input! Please enter a number: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cout << "Age must be between 0 and 120. Try again: ";
        }
    }

    cout << "Your age is " << age << endl;

    return 0;
}
