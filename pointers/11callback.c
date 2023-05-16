#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

// Define a function that takes a pointer to a function as a parameter
void PerformOperation(int (*callback)(int, int), int x, int y) {
    // Call the provided callback function and print the result
    int result = callback(x, y);
    printf("Result of the operation: %d\n", result);
}

int main() {
    // Declare a pointer to a function
    int (*pointer)(int, int);

    pointer = Add;

    int result1 = (*pointer)(5, 3);
    printf("Result of addition: %d\n", result1);

    // Use the pointer to perform the 'Add' operation through a callback
    printf("Performing addition using callback\n");
    PerformOperation(pointer, 7, 2);

    return 0;
}