
#include <iostream>
#include <iomanip>
using namespace std;

int main() { /// start of main function 
    double principal; // variable declaration
    double rate;
    double time;
    double simpleInterest;
    double totalAmount;

    cout << "=== Simple Interest Calculator ===" << endl;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100; // the heart (formula)
    totalAmount = principal + simpleInterest; // calculation of total amount

    cout << fixed << setprecision(2);

    cout << "\n--- Calculation Results ---" << endl;
    cout << "Principal: Rs. " << principal << endl;
    cout << "Interest Rate: " << rate << "%" << endl;
    cout << "Time: " << time << " years" << endl;
    cout << "Simple Interest: Rs. " << simpleInterest << endl;
    cout << "Total Amount: Rs. " << totalAmount << endl;

    return 0;
}
 // end of main function 