#include <stdio.h>

int main() {
    const int MAX = 100;
    volatile int sensorValue = 50;

    printf("MAX: %d\n", MAX);
    printf("Sensor Value: %d\n", sensorValue);

    return 0;
}
