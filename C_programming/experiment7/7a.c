#include <stdio.h>
#include <string.h>

struct library {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued;   // 1 = issued, 0 = not issued
};

int main() {
    struct library book[3];
    int i;

    // Input sample data
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Accession Number: ");
        scanf("%d", &book[i].accession_no);

        printf("Title: ");
        scanf(" %[^\n]", book[i].title);

        printf("Author: ");
        scanf(" %[^\n]", book[i].author);

        printf("Price: ");
        scanf("%f", &book[i].price);

        printf("Issued (1 = Yes, 0 = No): ");
        scanf("%d", &book[i].issued);
    }

    // Display data
    printf("\n--- Library Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Accession Number: %d\n", book[i].accession_no);
        printf("Title: %s\n", book[i].title);
        printf("Author: %s\n", book[i].author);
        printf("Price: %.2f\n", book[i].price);

        if (book[i].issued == 1)
            printf("Status: Issued\n");
        else
            printf("Status: Not Issued\n");
    }

    return 0;
}