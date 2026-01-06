#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial = %d\n", fact(n));
    return 0;
}
