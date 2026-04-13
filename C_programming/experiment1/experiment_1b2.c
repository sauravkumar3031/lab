#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;

    float result;

    // Implicit conversion (int to float)
    result = a + b;

    printf("Value of a (int): %d\n", a);
    printf("Value of b (float): %.2f\n", b);
    printf("Result after implicit conversion: %.2f\n", result);

    return 0;
}