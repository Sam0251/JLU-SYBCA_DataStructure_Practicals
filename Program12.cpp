//code to print satck(full stack)
#include <iostream>
using namespace std;
#define SIZE 5   
int stack[SIZE];
int top = -1;

void push(int element) {
    if (top == SIZE - 1) {
        printf("\nStack Full (Overflow)\n");
    } else {
        top++;
        stack[top] = element;
        printf("\n%d pushed into stack\n", element);
    }
}

// Function to pop an element from stack
void pop() {
    if (top == -1) {
        printf("\nStack Empty (Underflow)\n");
    } else {
        printf("\n%d popped from stack\n", stack[top]);
        stack[top] = 0; // optional, clear element
        top--;
    }
}

// Function to display stack elements
void display() {
    if (top == -1) {
        printf("\nStack is Empty\n");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

