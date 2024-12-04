#include <stdio.h>

int main() {
    int a[100], size, n;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) scanf("%d", &a[i]);

    printf("Enter the element to delete: ");
    scanf("%d", &n);

    for (int i = 0; i < size; i++) {
        if (a[i] == n) {
            for (int j = i; j < size - 1; j++) a[j] = a[j + 1];
            size--;
            break;
        }
    }

    printf("List after deletion: ");
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
