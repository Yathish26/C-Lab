#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 100
int stack[SIZE], top = -1;

void push(int element);
int pop();

int main() {
    int choice, data;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Size\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                if (data != INT_MIN) printf("Popped data: %d\n", data);
                break;
            case 3:
                printf("Stack size: %d\n", top + 1);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}

void push(int element) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow.\n");
        return;
    }
    stack[++top] = element;
    printf("Data pushed.\n");
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow.\n");
        return INT_MIN;
    }
    return stack[top--];
}
