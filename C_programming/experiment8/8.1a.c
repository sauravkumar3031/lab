#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50], copy[50];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // strlen
    printf("Length of s1 = %lu\n", strlen(s1));

    // strcpy
    strcpy(copy, s1);
    printf("Copy of s1 = %s\n", copy);

    // strcat
    strcat(s1, s2);
    printf("Concatenation = %s\n", s1);

    // strcmp
    if (strcmp(copy, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}