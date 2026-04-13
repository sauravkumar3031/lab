#include <stdio.h>

int main() {
    int a = 7, b = 2;
    float result;

    // Without type casting
    result = a / b;
    printf("Without type casting (a/b): %.2f\n", result);

    // With explicit type casting
    result = (float)a / b;
    printf("With type casting ((float)a/b): %.2f\n", result);

    // Using increment operator
    a++;
    printf("Value of a after increment: %d\n", a);

    return 0;
}