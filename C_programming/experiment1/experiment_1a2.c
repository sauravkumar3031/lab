#include <stdio.h>

int main() {
    // Variables for principal, rate, time, and calculated interest
    float principal, rate, time, simple_interest;
    const int DIVISOR = 100; // Constant variable

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Arithmetic expression using multiplication and division
    simple_interest = (principal * rate * time) / DIVISOR;

    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}
