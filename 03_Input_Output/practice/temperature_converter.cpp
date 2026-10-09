
#include <iostream>
#include <iomanip>
using namespace std;

int main() { // start of main function 
    double temperature;
    double convertedTemperature;  // variables declaration
    char choice;

    cout << "=== Temperature Converter ===" << endl;
    cout << "C. Celsius to Fahrenheit" << endl;
    cout << "F. Fahrenheit to Celsius" << endl;

    cout << "Choose conversion (C/F): ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (choice == 'C' || choice == 'c') { // decision making 
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;

        cout << fixed << setprecision(2);
        cout << temperature << " Celsius = "
             << convertedTemperature << " Fahrenheit" << endl;
    }
    else if (choice == 'F' || choice == 'f') {
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;

        cout << fixed << setprecision(2);
        cout << temperature << " Fahrenheit = "
             << convertedTemperature << " Celsius" << endl;
    }
    else {
        cout << "Invalid choice! Please enter C or F." << endl;
    }

    return 0; // return code
}
// end of main function 