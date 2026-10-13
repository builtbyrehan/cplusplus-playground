
#include <iostream>
using namespace std;

int main() {
    int age = 20;

    // Check whether the person is eligible to vote
    string result = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";

    cout << "Age: " << age << endl;
    cout << "Result: " << result << endl;


    // Find the greater number
    int a = 15;
    int b = 25;

    int greater = (a > b) ? a : b;

    cout << "Greater number: " << greater << endl;
    return 0;
}
