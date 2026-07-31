#include <iostream>

int main()
{
    int aValue{}, comparisonValue{};

    std::cout << "Enter an Integer:\n";

    if (!(std::cin >> aValue))
        return 1;

    while (true)
    {
        std::cout << "\nEnter an Integer:\n";

        if (!(std::cin >> comparisonValue))
            return 1;

        if (comparisonValue <= 0)
            return 0;
        else if (comparisonValue > aValue)
            std::cout << "increasing";
        else if (comparisonValue < aValue)
            std::cout << "not increasing";

        aValue = comparisonValue;
    }
}
