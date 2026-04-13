// Using switch statementWrite program to:
// (b) Print a student’s grade (“A”, “B”, “C”
// etc.) by accepting his/her percent
// marks.
#include <stdio.h>

int main() {
    int marks;

    printf("Enter percentage marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:
        case 9: printf("Grade: A\n"); break;
        case 8: printf("Grade: B\n"); break;
        case 7: printf("Grade: C\n"); break;
        case 6: printf("Grade: D\n"); break;
        default: printf("Grade: F\n");
    }

    return 0;
}