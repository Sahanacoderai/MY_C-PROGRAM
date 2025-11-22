#include <stdio.h>


struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", library[i].title);

        printf("Author: ");
        scanf(" %[^\n]", library[i].author);

        printf("Year of Publication: ");
        scanf("%d", &library[i].year);
    }

    /
    printf("\n--- List of Books in Library ---\n");
    for (i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf(" Title : %s\n", library[i].title);
        printf(" Author: %s\n", library[i].author);
        printf(" Year  : %d\n\n", library[i].year);
    }

    return 0;
}
