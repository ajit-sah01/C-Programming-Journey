#include  <stdio.h>
struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book b1;

    printf("Enter Book id:- ");
    scanf("%d", &b1.id);
    printf("Enter Book title:- ");
    scanf("%s", b1.title);

    printf("Book id :- %d", b1.id);
    printf("Book title :- %s", b1.title);
    return 0;
}