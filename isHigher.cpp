#include <iostream>

int main()
{
    int aValue{}, comparisonValue{};

    std::cout << "enter two integers separated by a newline to compare their values, input a negative to stop the program.\n";

    if (!(std::cin >> aValue))
        return 1;

    while (true)
    {

        if (!(std::cin >> comparisonValue))
            return 1;

        if (comparisonValue < 0)
            return 0;
        else if (comparisonValue > aValue)
            std::cout << "increasing\n";
        else if (comparisonValue < aValue)
            std::cout << "not increasing\n";

        aValue = comparisonValue;
    }
}
