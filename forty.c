#include <stdio.h>

int main() {
    int ch, a, b;
    do {
        printf("\n1.Add 2.Sub 3.Mul 4.Div 0.Exit\n");
        printf("Enter your choice :-");
        scanf("%d", &ch);
        if (ch == 0) break;
        printf("Enter Numbet 1:-");
        scanf("%d", &a);
        printf("Enter Numbet 2:-");
        scanf("%d", &b);
        switch (ch) {
            case 1: printf("Sum = %d\n", a + b); break;
            case 2: printf("Sub = %d\n", a - b); break;
            case 3: printf("Mul = %d\n", a * b); break;
            case 4: printf("Div = %d\n", a / b); break;
            default: printf("Invalid choice\n");
        }
    } while (1);
    return 0;
}
