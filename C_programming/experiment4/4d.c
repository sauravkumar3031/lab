// Using switch statementWrite program to:
// (d) Using “if” and “switch” statements
// Write programs to check whether the
// triangle is equilateral, isosceles, or
// scalene triangle.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check validity
    if (a + b > c && a + c > b && b + c > a) {

        switch(a == b && b == c) {
            case 1:
                printf("Equilateral Triangle\n");
                break;

            case 0:
                switch(a == b || b == c || a == c) {
                    case 1:
                        printf("Isosceles Triangle\n");
                        break;
                    case 0:
                        printf("Scalene Triangle\n");
                        break;
                }
        }

    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}