#include <stdio.h>
#include <stdlib.h>

int global = 10;        // Data segment
int uninit;             // BSS segment

int main() {
    int local = 5;      // Stack
    int *ptr = malloc(10 * sizeof(int)); // Heap

    printf("Global: %d\n", global);
    printf("Local: %d\n", local);

    free(ptr);
    return 0;
}
