#include <stdio.h>

int main() {
    int a, b;
    printf("Enter num 1 numbers: ");
    scanf("%d", &a);

    printf("Enter num 2 numbers: ");
    scanf("%d", &b);

    if (a > b)
        printf("Largest Is num 1 = %d", a);
    else if (a < b) {
        printf("Largest Is num 2 = %d", b);
    }else if (a == b) {
        printf("Both are same num 1 = %d and num 2 = %d", a, b);
    }else {
        printf("Try Agin");
    }


    return 0;
}


