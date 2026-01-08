#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int) * 5);

    if (!ptr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < 5; i++)
        ptr[i] = i * 10;

    free(ptr);
    ptr = NULL; // prevent dangling pointer

    return 0;
}
