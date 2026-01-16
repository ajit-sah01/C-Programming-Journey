#include <stdio.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c1;

    printf("Enter ID: ");
    scanf("%d", &c1.id); // Remember & for integers!

    printf("Enter your name: ");
    scanf("%s", c1.name); // No & needed for arrays

    printf("Enter your phone: ");
    scanf("%s", c1.phone);

    // Use %s for the phone number because it's a char array
    printf("\n--- Contact Saved ---\n");
    printf("ID: %d | Name: %s | Phone: %s\n", c1.id, c1.name, c1.phone);

    return 0;
}