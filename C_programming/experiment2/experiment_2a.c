// (a) Write simple program to convert
// temperature in Fahrenheit degrees to
// Centigrade degrees. (take input from the
// user)
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Taking input from user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display result
    printf("Temperature in Centigrade: %.2f\n", celsius);

    return 0;
}