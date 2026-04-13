#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Value of a = %d, Address of a = %u\n", a, &a);
    printf("Value of b = %.2f, Address of b = %u\n", b, &b);
    printf("Value of c = %c, Address of c = %u\n", c, &c);

    return 0;
}