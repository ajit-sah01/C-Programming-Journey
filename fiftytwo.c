#include <stdio.h>

typedef enum {
    LOW,
    MEDIUM,
    HIGH
} Priority;

typedef unsigned long ulong;

int main() {
    Priority taskPriority = HIGH;
    ulong memorySize = 2048;

    printf("Priority: %d\n", taskPriority);
    printf("Memory Size: %lu bytes\n", memorySize);

    return 0;
}
