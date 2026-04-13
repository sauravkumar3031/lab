// Using switch statementWrite program to:
// (c) Find if a given character is vowel
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Not a Vowel\n");
    }

    return 0;
}