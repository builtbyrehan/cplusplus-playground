
#include <iostream>
#include <iomanip>
using namespace std;

int main() { // start of main function 
    double price = 1250.56789; // variable initialization 
    double percentage = 85.5;

    cout << "Default price: " << price << endl;

    cout << fixed << setprecision(2); // setting precision of how many spaces
    cout << "Formatted price: " << price << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "\n--- Student Results ---" << endl;

    cout << left << setw(15) << "Name" // using set() to align left and right
         << right << setw(10) << "Marks" << endl;

    cout << left << setw(15) << "Rehan"
         << right << setw(10) << 92 << endl;

    cout << left << setw(15) << "Ali"
         << right << setw(10) << 85 << endl;

    return 0; // return code
} // end of main function 
