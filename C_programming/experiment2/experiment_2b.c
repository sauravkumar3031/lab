// (b) Write simple programs to calculate the
// area and perimeter of the rectangle, and
// the area & circumference of the circle
// (take input from the user)

#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input from user
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Output
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}