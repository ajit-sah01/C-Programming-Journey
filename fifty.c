#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char grade;
};

// Function remains the same
char calculateGrade(float m) {
    if (m >= 90) return 'A';
    else if (m >= 75) return 'B';
    else if (m >= 60) return 'C';
    else return 'D';
}

int main() {
    FILE *fp;
    struct Student s;

    // --- BETTER SCANF LOGIC ---
    printf("Enter roll number: ");
    while (scanf("%d", &s.roll) != 1) {
        printf("Invalid input. Please enter a numeric roll number: ");
        while (getchar() != '\n'); // Clear the invalid characters from buffer
    }

    printf("Enter marks: ");
    while (scanf("%f", &s.marks) != 1 || s.marks < 0 || s.marks > 100) {
        printf("Invalid marks. Enter a value between 0 and 100: ");
        while (getchar() != '\n');
    }
    // ---------------------------

    s.grade = calculateGrade(s.marks);

    fp = fopen("result.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    fprintf(fp, "Roll: %d\nMarks: %.2f\nGrade: %c\n", s.roll, s.marks, s.grade);
    fclose(fp);

    printf("\n--- Result Saved ---\n");
    printf("Roll: %d | Marks: %.2f | Grade: %c\n", s.roll, s.marks, s.grade);

    return 0;
}