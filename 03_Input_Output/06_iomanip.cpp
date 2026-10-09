
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() { // start of main function 
    string name = "Rehan";
    double marks = 92.5678;
    double fee = 12500.5;

    // Set decimal precision
    cout << fixed << setprecision(2);

    // Create a formatted table
    cout << left << setw(15) << "Name"
         << right << setw(12) << "Marks"
         << setw(15) << "Fee" << endl;

    cout << string(42, '-') << endl;

    cout << left << setw(15) << name // using setw() to align left
         << right << setw(12) << marks
         << setw(15) << fee << endl;

    // Use setfill() to decorate output
    cout << setfill('*') << setw(30) << "" << endl; // filling empty space with *

    // Restore the default fill character
    cout << setfill(' ');

    // Display a value with a custom width
    cout << "Formatted marks: "
         << setw(8) << marks << endl;

    return 0;
}
 // end of main function 