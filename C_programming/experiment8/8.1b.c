#include <stdio.h>
#include <math.h>

int main() {
    double a = 25.0, b = 3.0;

    printf("Square root of %.2f = %.2f\n", a, sqrt(a));
    printf("Power (%.2f ^ %.2f) = %.2f\n", a, b, pow(a, b));
    printf("Ceil of 4.3 = %.2f\n", ceil(4.3));
    printf("Floor of 4.7 = %.2f\n", floor(4.7));

    return 0;
}