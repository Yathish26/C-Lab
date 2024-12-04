#include <stdio.h>

int main() {
    int a[100], size, element, loc;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) scanf("%d", &a[i]);

    printf("Enter an element to insert: ");
    scanf("%d", &element);
    printf("Enter a position to insert an element: ");
    scanf("%d", &loc);
    loc--;  // Convert to 0-based index

    for (int i = size; i > loc; i--) a[i] = a[i - 1];
    a[loc] = element;

    printf("List after insertion: ");
    for (int i = 0; i <= size; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
