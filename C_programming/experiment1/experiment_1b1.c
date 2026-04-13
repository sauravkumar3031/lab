#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value: %d\n", a);

    printf("Post-increment (a++): %d\n", a++);
    printf("After post-increment: %d\n", a);

    printf("Pre-increment (++a): %d\n", ++a);

    printf("Post-decrement (a--): %d\n", a--);
    printf("After post-decrement: %d\n", a);

    printf("Pre-decrement (--a): %d\n", --a);

    return 0;
}