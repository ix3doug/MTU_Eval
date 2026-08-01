#include <iostream>

int main() {

    int count = 0;

    for (int i = 17; i <= 329; i = i + 2) {

        count = count + i;

    }

    std::cout << "the sum is " << count;
}
