#include <stdio.h>

int main() {
    int arr[10] = {6, 12, 0, 18, 11, 99, 55, 45, 34, 2};
    int n = 10;

    for (int i = 0; i < n - 1; i++) {
        int position = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[position] > arr[j]) position = j;
        }
        if (position != i) {
            int swap = arr[i];
            arr[i] = arr[position];
            arr[position] = swap;
        }
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) printf("%d\t", arr[i]);
    return 0;
}
