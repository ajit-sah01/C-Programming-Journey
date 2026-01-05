#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter num 1 numbers:- ");
    scanf("%d", &a);
    printf("Enter num 2 numbers:- ");
    scanf("%d",&b);
    printf("Enter num 3 numbers:- ");
    scanf("%d" ,&c);


    if (a==b && b==c){
        printf("Both Numbers Are Equal");
    }else if (b >= a && b >= c) {
        printf("Largest Is Num 2  = %d", b);
    }else if (c >= a && c >= b) {
        printf("Largest Is Num 3 = %d", c);
    }else if (a >= b && a >= c) {
        printf("Largest Is Num 1 = %d", a);
    }else {
        printf("Try Agin");
    }

    return 0;
}

