#include <iostream>

int main() {

    int int1{}, int2{};

    std::cout << "Enter an Integer:\n";

    std::cin >> int1;

    while (true) {

        std::cout << "\nEnter an Integer\n";

        std::cin >> int2;

        if (int2 > int1)
            std::cout << "Higher";
        else
            std::cout << "Lower";

        int1 = int2;
    }

}