#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // rand() function
    printf("Random number: %d\n", rand());

    // srand() with time
    srand(time(0));
    printf("Seeded random number: %d\n", rand());

    // abs() function
    printf("Absolute value of -10 = %d\n", abs(-10));

    return 0;
}