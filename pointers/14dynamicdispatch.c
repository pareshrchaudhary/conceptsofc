#include <stdio.h>

// Base structure representing an operation
typedef struct {
    void (*perform)(int, int);
} Operation;

// Function to perform addition
void Add(int a, int b) {
    int result = a + b;
    printf("The sum is: %d\n", result);
}

// Function to perform subtraction
void Sub(int a, int b) {
    int result = a - b;
    printf("The difference is: %d\n", result);
}

int main() {
    Operation addition;
    Operation subtraction;

    // Assign function pointers
    addition.perform = Add;
    subtraction.perform = Sub;

    // Dynamic dispatch
    Operation* operationToPerform;

    int choice;
    printf("Enter 1 for addition, 2 for subtraction: ");
    scanf("%d", &choice);

    if (choice == 1) {
        operationToPerform = &addition;
    } else if (choice == 2) {
        operationToPerform = &subtraction;
    } else {
        printf("Invalid choice.\n");
        return 0;
    }

    // Perform the operation using dynamic dispatch
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    operationToPerform->perform(a, b);

    return 0;
}