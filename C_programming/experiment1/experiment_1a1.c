#include <stdio.h>

#define PI 3.14159  // Constant defined using preprocessor directive

int main() {
    float radius, area; // Variables to store input and result

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Arithmetic expression: Area = PI * radius * radius
    area = PI * radius * radius;

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
