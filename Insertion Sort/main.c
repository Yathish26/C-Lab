#include <stdio.h>

int main() {
    int arr[64], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++) {
        int j = i;
        int temp = arr[j];
        while (j > 0 && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }

    printf("Sorted list in ascending order:\n");
    for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
    return 0;
}
