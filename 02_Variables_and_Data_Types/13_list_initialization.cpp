#include <iostream>

int main() {

    // List initialization
    int age{25};
    double height{5.9};
    char grade{'A'};
    bool isStudent{true};

    std::cout << "Age: " << age << '\n';
    std::cout << "Height: " << height << '\n';
    std::cout << "Grade: " << grade << '\n';
    std::cout << std::boolalpha;
    std::cout << "Student: " << isStudent << '\n';

    // Empty braces perform value initialization
    int score{};
    double salary{};
    bool employed{};

    std::cout << "\nDefault values:\n";
    std::cout << "Score: " << score << '\n';
    std::cout << "Salary: " << salary << '\n';
    std::cout << "Employed: " << employed << '\n';

    // List initialization prevents narrowing conversions

    // int number{3.14};  // ❌ Compilation error

    // double value{10};  // ✅ Safe conversion: int -> double

    double value{10};

    std::cout << "\nValue: " << value << '\n';

    return 0;
}
