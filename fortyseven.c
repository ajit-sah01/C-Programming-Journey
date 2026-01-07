#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void display(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Roll: %d  Marks: %.2f\n", s[i].roll, s[i].marks);
    }
}

int main() {
    struct Student s[2] = {{1, 85.5}, {2, 90.0}};
    display(s, 2);
    return 0;
}
