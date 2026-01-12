#include <stdio.h>

int main() {
    int n = 5;

    // O(1) – Constant Time
    int x = 10;
    printf("O(1) Example: %d\n", x);

    // O(n) – Linear Time
    printf("O(n) Example:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // O(n^2) – Quadratic Time
    printf("O(n^2) Example:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
