#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);

    int len = strlen(str1) - 1;
    strcpy(str2, str1);

    printf("Length: %d\n", len);
    printf("Copied: %s", str2);

    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    return 0;
}
