
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    string city;
    string favoriteSubject;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your favorite subject: ";
    getline(cin, favoriteSubject);

    cout << "\n--- Your Information ---" << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "City: " << city << endl;
    cout << "Favorite Subject: " << favoriteSubject << endl;

    return 0;
}
