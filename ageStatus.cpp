#include <iostream>

int main() {

    int age{};

    std::cout << "enter age: ";

    if (!(std::cin >> age))
        return 1;

    if (age == 1)
        std::cout << "infant";
    else if (age >= 2 && age <= 3)
        std::cout << "toddler";
    else if (age == 4)
        std::cout << "preschooler";
    else if (age == 5)
        std::cout << "kindergartener";
    else if (age >= 6 && age <= 10)
        std::cout << "elementary age";
    else if (age >= 11 && age <= 13)
        std::cout << "middle schooler";
    else if (age >= 14 && age <= 17)
        std::cout << "high schooler";
    else if (age == 18)
        std::cout << "too cool";
    else if (age >= 18)
        std::cout << "old";

    return 0;
}