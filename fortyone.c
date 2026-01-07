#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a      : %d\n", a);
    printf("Address of a    : %p\n", &a);
    printf("Pointer p holds : %p\n", p);
    printf("Value via p     : %d\n", *p);

    return 0;
}
