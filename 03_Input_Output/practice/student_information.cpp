
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() { // start of main function
    string fullName;
    string university;
    int age;
    int semester; // variables declaration
    double cgpa;

    cout << "=== Student Information System ===" << endl;

    cout << "Enter your full name: ";
    getline(cin, fullName); // getting input from the user

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your university name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignoring newline character from the buffer
    getline(cin, university); //getting input 

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your CGPA: ";
    cin >> cgpa; // taking input 

    cout << "\n";
    cout << setfill('=') << setw(40) << "" << endl; // using setfill to fill = the character
    cout << setfill(' ');
    cout << "         STUDENT REPORT" << endl;
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setfill(' ');

    cout << left << setw(18) << "Full Name" << ": " << fullName << endl;
    cout << left << setw(18) << "Age" << ": " << age << endl;
    cout << left << setw(18) << "University" << ": " << university << endl;
    cout << left << setw(18) << "Semester" << ": " << semester << endl;

    cout << fixed << setprecision(2); // using set precision left and fixed for formatted output
    cout << left << setw(18) << "CGPA" << ": " << cgpa << endl;

    cout << setfill('=') << setw(40) << "" << endl;

    return 0;
}
// end of main function 