#include <stdio.h>

struct distance {
    int km;
    int meter;
};

int main() {
    struct distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Kilometers: ");
    scanf("%d", &d1.km);
    printf("Meters: ");
    scanf("%d", &d1.meter);

    // Input second distance
    printf("\nEnter second distance:\n");
    printf("Kilometers: ");
    scanf("%d", &d2.km);
    printf("Meters: ");
    scanf("%d", &d2.meter);

    // Add distances
    sum.km = d1.km + d2.km;
    sum.meter = d1.meter + d2.meter;

    // Convert meters to kilometers if >= 1000
    if (sum.meter >= 1000) {
        sum.km += sum.meter / 1000;
        sum.meter = sum.meter % 1000;
    }

    // Display result
    printf("\nTotal Distance = %d km %d meters\n", sum.km, sum.meter);

    return 0;
}