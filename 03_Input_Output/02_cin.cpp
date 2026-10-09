
#include <iostream>
using namespace std;

int main() { // start of main function 
    string name; // variables declaration
    int age;
    float height;

    cout << "Enter your name: ";
    cin >> name; // input stream

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in feet: ";
    cin >> height;  // input 

    cout << "\n--- Your Information ---" << endl;
    cout << "Name: " << name << endl; // ouptut
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;

    return 0;
}
 // end of main function 