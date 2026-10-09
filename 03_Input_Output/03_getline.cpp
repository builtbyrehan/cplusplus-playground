
#include <iostream>
#include <string>
using namespace std;

int main() { // start of main function 
    string fullName;
    string city;
    string favoriteSubject; // variable variable declaration

    cout << "Enter your full name: ";
    getline(cin, fullName); // getline 

    cout << "Enter your city: ";
    getline(cin, city); // getline 

    cout << "Enter your favorite subject: ";
    getline(cin, favoriteSubject); // getline 

    cout << "\n--- Your Information ---" << endl; // output goes here
    cout << "Full Name: " << fullName << endl;
    cout << "City: " << city << endl;
    cout << "Favorite Subject: " << favoriteSubject << endl;

    return 0;
}
 // end of main function 