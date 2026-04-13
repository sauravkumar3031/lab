// Write Program to:
// (b) Generate multiplication table up to 10
// for numbers 1 to 5.
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        printf("\nMultiplication Table for %d:\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}