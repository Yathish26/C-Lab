#include <stdio.h>
#include <stdlib.h>

void linear_search(int search_key, int array[100], int n);
void binary_search(int search_key, int array[100], int n);

int main() {
    int array[100], search_key, n, choice;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    printf("ENTER THE SEARCH KEY: ");
    scanf("%d", &search_key);
    printf("\n1. LINEAR SEARCH\n2. BINARY SEARCH\nENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    if (choice == 1) linear_search(search_key, array, n);
    else if (choice == 2) binary_search(search_key, array, n);
    else printf("Invalid choice.");
    return 0;
}

void linear_search(int search_key, int array[100], int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == search_key) {
            printf("Search Key %d found at location %d\n", search_key, i + 1);
            return;
        }
    }
    printf("Search Key not found\n");
}

void binary_search(int search_key, int array[100], int n) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == search_key) {
            printf("Search Key %d found at location %d\n", search_key, mid + 1);
            return;
        } else if (search_key < array[mid]) high = mid - 1;
        else low = mid + 1;
    }
    printf("Search Key not found\n");
}
