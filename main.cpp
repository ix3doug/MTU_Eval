#include <iostream>

int main() {

    int int1{}, int2{};

    std::cout << "Enter an Integer:\n";

    if (!(std::cin >> int1))
        return 0;

    while (true) {

        std::cout << "\nEnter an Integer:\n";

        if (!(std::cin >> int2))
            return 0;

        if (int2 > int1)
            std::cout << "Higher";
        else if (int2 < int1)
            std::cout << "Lower";

        int1 = int2;
    }

}