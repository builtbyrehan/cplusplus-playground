
#include <iostream>
using namespace std;

int main() {
    int age = 20;

    // Check whether the person is eligible to vote
    string result = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";

    cout << "Age: " << age << endl;
    cout << "Result: " << result << endl;



    return 0;
}
