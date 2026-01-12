#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[10] = {0};

    // Frequency Count Pattern
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Frequency Count:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0)
            printf("%d -> %d\n", i, freq[i]);
    }

    // Prefix Sum Pattern
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    printf("\nPrefix Sum Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", prefix[i]);
    }

    return 0;
}
