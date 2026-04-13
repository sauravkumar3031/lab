#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    const float SCALE_FACTOR = 1.8; // Constant (equivalent to 9/5)
    const int OFFSET = 32;          // Constant offset for Fahrenheit

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Arithmetic expression combining multiplication and addition
    fahrenheit = (celsius * SCALE_FACTOR) + OFFSET;

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
