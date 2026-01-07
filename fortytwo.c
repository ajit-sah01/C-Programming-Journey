#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Array using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n\nString using pointer:\n");
    char str[] = "C Language";
    char *s = str;

    while (*s != '\0') {
        printf("%c", *s);
        s++;
    }

    return 0;
}
