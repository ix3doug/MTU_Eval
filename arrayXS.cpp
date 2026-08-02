#include <iostream>

int main() {
    // 1. Declare a 100-element floating-point array
    double XS[100];

    // 2. N represents how many elements are currently stored
    int N = 5;

    // 3. Store values in the first N elements
    XS[0] = 12.5;
    XS[1] = 3.14;
    XS[2] = -4.2;
    XS[3] = 88.0;
    XS[4] = 0.0;

    // --- SHORT CODE SEGMENT REQUIRED BY ASSESSMENT ---

    double X = XS[0];

    for (int i{}; i <= N; i++) {

        if (X > XS[i])
            X = XS[i];

    }

    // --------------------------------------------------

    printf("Smallest element X = %f\n", X);
    return 0;
}