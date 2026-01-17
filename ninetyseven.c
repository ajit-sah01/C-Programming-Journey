#include <stdio.h>
#include <stdlib.h>

int main () {
    char cmd[500];
    while (1) {
        printf("mini-shell");
        fgets(cmd, 500, stdin);

        if (cmd[0] == 'e')
            break;
    }
    return 0;
}
