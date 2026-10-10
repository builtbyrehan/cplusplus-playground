
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    string fullName;
    string university;
    int age;
    int semester;
    double cgpa;

    cout << "=== Student Information System ===" << endl;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your university name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, university);

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "\n";
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setfill(' ');
    cout << "         STUDENT REPORT" << endl;
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setfill(' ');

    cout << left << setw(18) << "Full Name" << ": " << fullName << endl;
    cout << left << setw(18) << "Age" << ": " << age << endl;
    cout << left << setw(18) << "University" << ": " << university << endl;
    cout << left << setw(18) << "Semester" << ": " << semester << endl;

    cout << fixed << setprecision(2);
    cout << left << setw(18) << "CGPA" << ": " << cgpa << endl;

    cout << setfill('=') << setw(40) << "" << endl;

    return 0;
}
