
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    // Logical AND (&&)
    cout << "Logical AND: "  << (age >= 18 && hasID) << endl;
    /*the and operator says that both values must be TRUE*/
    
        // Logical OR (||)
    cout << "Logical OR: "
         << (age < 18 || hasID) << endl;





    return 0;
}
