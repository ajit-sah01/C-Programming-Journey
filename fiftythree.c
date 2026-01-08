#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define DEBUG 1

int main() {
#if DEBUG
    printf("Debug mode enabled\n");
#endif

    printf("PI = %.2f\n", PI);
    printf("Square of 5 = %d\n", SQUARE(5));

    return 0;
}
