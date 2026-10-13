/*

1. What is operator precedence?
Operator precedence determines which operator is evaluated first when an expression contains multiple operators.

or example:
int result = 2 + 3 * 4;


Multiplication has higher precedence than addition, so:
1. 3 * 4 = 12
2. 2 + 12 = 14
Therefore, the result is 14, not 20.

*/


#include <iostream>
using namespace std;

int main() {
    int result1 = 2 + 3 * 4;

    return 0;
}
