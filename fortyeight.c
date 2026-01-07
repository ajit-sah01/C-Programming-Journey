#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[50];
    char content[200];

    // 1. Get the filename from the user
    printf("Enter filename (e.g., notes.txt):- ");
    scanf("%s", filename);
    getchar(); // Clean the newline character from the buffer

    // 2. Open file for writing ('w')
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter the text you want to save:- ");
    fgets(content, sizeof(content), stdin);

    // Write the user's input to the file
    fprintf(fp, "%s", content);
    fclose(fp);
    printf("Successfully saved to %s\n", filename);

    // 3. Open file for reading ('r') to verify
    printf("\n--- Reading File Content ---\n");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}