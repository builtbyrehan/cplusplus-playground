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
    int result2 = (2 + 3) * 4;
    int result3 = 20 / 5 * 2;
    int result4 = 10 - 4 + 2;
    int result5 = 5 + 2 > 6;
    int result6 = 1 + 2 * 3 == 7;

    cout << "2 + 3 * 4 = " << result1 << endl;
    cout << "(2 + 3) * 4 = " << result2 << endl;
    cout << "20 / 5 * 2 = " << result3 << endl;
    cout << "10 - 4 + 2 = " << result4 << endl;
    cout << "5 + 2 > 6 = " << result5 << endl;
    cout << "1 + 2 * 3 == 7 = " << result6 << endl;

    return 0;
}

/*Important: Precedence vs. associativity
Precedence tells you which operator group binds more tightly. Associativity determines grouping when operators at the same precedence level appear together.


For example:
20 / 5 * 2


Multiplication and division have equal precedence and associate left to right:
- 20 / 5 = 4
- 4 * 2 = 8*


PRACTICE QUESTION:

What is the output of this expression?
int result = 10 + 6 / 2 * 3;
cout << result;/
