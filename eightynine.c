#include <stdio.h>

int main(void) {
    int age = 0;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Your age is %d\n", age);
    return 0;
}
