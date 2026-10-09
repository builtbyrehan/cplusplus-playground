
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 1250.56789;
    double percentage = 85.5;

    cout << "Default price: " << price << endl;

    cout << fixed << setprecision(2);
    cout << "Formatted price: " << price << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "\n--- Student Results ---" << endl;

    cout << left << setw(15) << "Name"
         << right << setw(10) << "Marks" << endl;

    cout << left << setw(15) << "Rehan"
         << right << setw(10) << 92 << endl;

    cout << left << setw(15) << "Ali"
         << right << setw(10) << 85 << endl;

    return 0;
}
