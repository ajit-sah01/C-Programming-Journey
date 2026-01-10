#include <stdio.h>

int main() {
    int sparse[3][3] = {
        {0, 0, 3},
        {0, 0, 0},
        {5, 0, 0}
    };

    printf("Row Col Value\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sparse[i][j] != 0) {
                printf("%d   %d   %d\n", i, j, sparse[i][j]);
            }
        }
    }
    return 0;
}
