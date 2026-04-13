// Write program to:
// (d) Find if a given character is vowel (use
// if-else ladder).
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'A')
        printf("Vowel\n");
    else if (ch == 'e' || ch == 'E')
        printf("Vowel\n");
    else if (ch == 'i' || ch == 'I')
        printf("Vowel\n");
    else if (ch == 'o' || ch == 'O')
        printf("Vowel\n");
    else if (ch == 'u' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Not a Vowel\n");

    return 0;
}